import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

dataset = pd.read_csv(r'D:\Machine learning projects\loan_approval_dataset.csv')
dataset[' loan_status'] = dataset[' loan_status'].replace([' Approved',' Rejected'],[1,0])
dataset[' self_employed'] = dataset[' self_employed'].replace([' Yes',' No'],[1,0])
dataset[' education'] = dataset[' education'].replace([' Graduate',' Not Graduate'],[1,0])

X = dataset.iloc[:,1:-1].values
y = dataset.iloc[:,-1].values

from sklearn.model_selection import train_test_split
X_train,X_test,y_train,y_test = train_test_split(X,y,test_size=0.2,random_state=42)

from sklearn.preprocessing import StandardScaler
sc = StandardScaler()
X_train = sc.fit_transform(X_train)
X_test = sc.transform(X_test)


from sklearn.linear_model import LogisticRegression
lr = LogisticRegression()
lr.fit(X_train,y_train)

ypred = lr.predict(X_test)

from sklearn.metrics import confusion_matrix,accuracy_score
cm1 = confusion_matrix(y_test,ypred)
ac1 = accuracy_score(y_test,ypred)

from sklearn.svm import SVC
sv = SVC(kernel='rbf',random_state=0)
sv.fit(X_train,y_train)

ypred1 = sv.predict(X_test)
cm2 = confusion_matrix(y_test,ypred1)
ac2 = accuracy_score(y_test,ypred1)
ac2

from sklearn.model_selection import cross_val_score
accuracies1 = cross_val_score(estimator=sv,X=X_train,y=y_train,cv=10)
print('Accuracy1:{:.2f}%'.format(accuracies1.mean()*100))

accuracies2 = cross_val_score(estimator=lr,X=X_train,y=y_train,cv=10)
accuracies2
print('Accuracy2:{:.2f}%'.format(accuracies2.mean()*100))



from sklearn.model_selection import GridSearchCV
parameters = [{'C':[1,10,100,1000],'kernel':['linear']},
              {'C':[1,10,100,1000],'kernel':['rbf'],'gamma':[0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8]}]

grid_search = GridSearchCV(estimator=sv,
                           param_grid=parameters,
                           scoring='accuracy',
                           cv=10,
                           n_jobs=-1)
grid_search1 = grid_search.fit(X_train,y_train)
best_accuracy = grid_search1.best_score_
best_parameters = grid_search1.best_params_
print('Best Accuracy: {:.2f}%'.format(best_accuracy*100))
print('Best Parameters:',best_parameters)


from sklearn.ensemble import RandomForestClassifier
rfc = RandomForestClassifier()
rfc.fit(X_train,y_train)

ypred2 = rfc.predict(X_test)

cm3 = confusion_matrix(y_test,ypred2)
cm3

ac3 = accuracy_score(y_test,ypred2)
ac3

print('Logisctic Regression: ',ac1)
print('SVC: ',best_accuracy)
print('RandomForestClassifier: ',ac3)