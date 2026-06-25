#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Question{
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    char answer;
};
void entries(vector<Question> &quiz,int n){
    cin.ignore();
    for(int i=0;i<n;i++){

        cout<<"\nEnter Question "<<i+1<<endl;
        getline(cin,quiz[i].question);
        cout<<"Option A: ";
        getline(cin,quiz[i].option1);
        cout<<"Option B: ";
        getline(cin,quiz[i].option2);
        cout<<"Option C: ";
        getline(cin,quiz[i].option3);
        cout<<"Option D: ";
        getline(cin,quiz[i].option4);
        cout<<"Correct Answer (A/B/C/D): ";
        cin>>quiz[i].answer;
        cin.ignore();
    }
}
void startQuiz(vector<Question> &quiz,int n){
    char userAnswer;
    int score=0;
    for(int i=0;i<n;i++){
        cout<<"\nQuestion "<<i+1<<endl;
        cout<<quiz[i].question<<endl;
        cout<<"A. "<<quiz[i].option1<<endl;
        cout<<"B. "<<quiz[i].option2<<endl;
        cout<<"C. "<<quiz[i].option3<<endl;
        cout<<"D. "<<quiz[i].option4<<endl;
        cout<<"Enter your answer: ";
        cin>>userAnswer;
        if(userAnswer==quiz[i].answer || userAnswer==quiz[i].answer+32){
            cout<<"Correct Answer"<<endl;
            score++;
        }
        else{
            cout<<"Wrong Answer"<<endl;
            cout<<"Correct Answer is "<<quiz[i].answer<<endl;
        }
    }
    cout<<"\n----------- RESULT -----------"<<endl;
    cout<<"Total Questions : "<<n<<endl;
    cout<<"Correct Answers : "<<score<<endl;
    cout<<"Wrong Answers : "<<n-score<<endl;
    cout<<"Score : "<<score<<"/"<<n<<endl;
    float percentage=(float)score/n*100;
    cout<<"Percentage : "<<percentage<<"%"<<endl;
    if(percentage>=80){
        cout<<"Excellent"<<endl;
    }
    else if(percentage>=50){
        cout<<"Good"<<endl;
    }
    else{
        cout<<"Need Improvement"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter number of questions: ";
    cin>>n;
    vector<Question> quiz(n);
    int choice;
    do{

        cout<<"\n------ QUIZ MENU ------"<<endl;
        cout<<"1. Add Questions"<<endl;
        cout<<"2. Start Quiz"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                entries(quiz,n);
                break;

            case 2:
                startQuiz(quiz,n);
                break;

            case 3:
                cout<<"Thank You"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=3);

    return 0;
}