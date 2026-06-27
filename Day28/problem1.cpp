#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Book{
        int bookid;
        string bookname;
        string authorname;
        string category;
        int quantity;

        int issuerid;
        string issuername;
        bool isissued;

    };
void addbooks(vector<Book>&library){
    int records;
    cout<<"enter the number of records"<<endl;
    cin>>records;
    cin.ignore();
    for(int i=0;i<records;i++){
        Book temp;
        cout<<"Book ID :"<<" ";
        cin>>temp.bookid;
        cin.ignore();
        cout<<"Book Name :"<<" ";
        getline(cin,temp.bookname);
        cout<<"Author Name :"<<" ";
        getline(cin,temp.authorname);
        cout<<"Book Category"<<" ";
        getline(cin,temp.category);
        cout<<"Book Quantity"<<" ";
        cin>>temp.quantity;
        cin.ignore();
        temp.isissued=false;
        temp.issuerid=0;
        temp.issuername="";
        library.push_back(temp);

    }
}
void displaybooks(vector<Book>&library){
    if(library.empty()){
    cout<<"No books available"<<endl;
    return;
}
    for(int i=0;i<library.size();i++){
        cout<<" Book ID:"<<" ";
        cout<<library[i].bookid<<endl;
        cout<<"Book Name :"<<" ";
        cout<<library[i].bookname<<endl;
        cout<<"Author Name : "<<" ";
        cout<<library[i].authorname<<endl;
        cout<<"Book category :"<<" ";
        cout<<library[i].category<<endl;
        cout<<"Book quantity"<<" ";
        cout<<library[i].quantity<<endl;
        if(library[i].isissued==false){
            cout<<"book have not issued to anyone"<<endl;
        }
        else{
            cout<<"book is already issued"<<endl;
        }
        if(library[i].issuerid==0){
            cout<<"book has no issuer"<<endl;
        }
        else{
            cout<<"Issuer ID :"<<" ";
            cout<<library[i].issuerid<<endl;
            cout<<"Issuer Name :"<<" ";
            cout<<library[i].issuername<<endl;
        }


    }

}
void searchbooks(vector<Book> &library){
    cin.ignore();

    cout<<"Enter the book name to search"<<endl;

    string name;
    getline(cin,name);

    bool found=false;
    if(library.empty()){
    cout<<"No books available"<<endl;
    return;
}

    for(int i=0;i<library.size();i++){

        if(library[i].bookname==name){

            found=true;

            cout<<"Book ID : "<<library[i].bookid<<endl;
            cout<<"Book Name : "<<library[i].bookname<<endl;
            cout<<"Author Name : "<<library[i].authorname<<endl;
            cout<<"Category : "<<library[i].category<<endl;
            cout<<"Quantity : "<<library[i].quantity<<endl;

            if(library[i].isissued){
                cout<<"Book is Issued"<<endl;
                cout<<"Issuer ID : "<<library[i].issuerid<<endl;
                cout<<"Issuer Name : "<<library[i].issuername<<endl;
            }
            else{
                cout<<"Book is Available"<<endl;
            }

            break;
        }
    }

    if(found==false){
        cout<<"Book not found"<<endl;
    }
}
void deletebooks(vector<Book> &library){

    if(library.empty()){
        cout<<"No books available"<<endl;
        return;
    }
    int id;
    cout<<"Enter the Book ID to delete: ";
    cin>>id;

    for(int i=0;i<library.size();i++){

        if(library[i].bookid==id){

            library.erase(library.begin()+i);

            cout<<"Book deleted successfully"<<endl;
            return;
        }
    }

    cout<<"Book not found"<<endl;
}
void issuebook(vector<Book> &library){

    if(library.empty()){
        cout<<"No books available"<<endl;
        return;
    }

    int id;

    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<library.size();i++){

        if(library[i].bookid==id){

            if(library[i].quantity==0){
                cout<<"Book is out of stock"<<endl;
                return;
            }

            if(library[i].isissued){
                cout<<"Book is already issued"<<endl;
                return;
            }

            cout<<"Enter Issuer ID: ";
            cin>>library[i].issuerid;
            cin.ignore();

            cout<<"Enter Issuer Name: ";
            getline(cin,library[i].issuername);

            library[i].isissued=true;
            library[i].quantity--;

            cout<<"Book issued successfully"<<endl;
            return;
        }
    }

    cout<<"Book not found"<<endl;
}
void returnbook(vector<Book> &library){

    if(library.empty()){
        cout<<"No books available"<<endl;
        return;
    }

    int id;

    cout<<"Enter Book ID: ";
    cin>>id;

    for(int i=0;i<library.size();i++){

        if(library[i].bookid==id){

            if(library[i].isissued==false){
                cout<<"Book is already available in library"<<endl;
                return;
            }

            library[i].isissued=false;
            library[i].quantity++;

            library[i].issuerid=0;
            library[i].issuername="";

            cout<<"Book returned successfully"<<endl;
            return;
        }
    }

    cout<<"Book not found"<<endl;
}
int main(){
    vector<Book> library;
    int choice;
    do{
    cout<<"enter 1 to addbooks"<<endl;
    cout<<"enter 2 to displaybooks"<<endl;
    cout<<"enter 3 to searchbooks"<<endl;
    cout<<"enter 4 to delete books"<<endl;
    cout<<"enter 5 to issue the book"<<endl;
    cout<<"enter 6 to return the book"<<endl;
    cout<<"enter the choice"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            addbooks(library);
            break;

        case 2:
            displaybooks(library);
            break;
        case 3:
            searchbooks(library);
            break;
        case 4:
            deletebooks(library);
            break;
        case 5:
            issuebook(library);
            break;
        case 6:
            returnbook(library); 
            break; 
        case 7:
            cout<<"Thank You"<<endl;
            break;
                      
        default:
            cout<<"Invalid choice"<<endl;
            break;        
    }

}while(choice!=7);
    cout<<"Enter 7 to Exit"<<endl;;   

    
}
