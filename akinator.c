#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node {
    char questionOractor[200];
    struct Node *yes;
    struct Node *no;
} Node;
Node* createNode(const char* data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->questionOractor, data);
    newNode->yes = NULL;
    newNode->no = NULL;
    return newNode;
}
void traverseTree(Node* root) {
    char answer[10];
    if (root->yes == NULL && root->no == NULL) {
        printf("%s? (yes/no): ", root->questionOractor);
        scanf("%s", answer);
        if (strcmp(answer, "yes") == 0) {
            printf("Yay! I guessed the answer correctly!\n");
            return;
        }

        printf("Oh no! I couldn't guess the actor.\n");
        return;
    }

    // If the node contains a question
    printf("%s (yes/no): ", root->questionOractor);
    scanf("%s", answer);

    // Traverse based on the user's answer
    if (strcmp(answer, "yes") == 0) {
        traverseTree(root->yes);
    } else {
        traverseTree(root->no);
    }
}
Node* buildTree(){
    Node* root = createNode("Is the actor male?");
    root->no=createNode("did she rule the tollywood before 10 years?");
    root->no->no=createNode("is she ruling present");
    root->no->no->yes=createNode("does she dance well");
    root->no->no->yes->yes=createNode("is shee from kerala background");
    root->no->no->yes->yes->yes=createNode("sai pallavi");
    root->no->no->yes->yes->no=createNode("sree leela");
    root->no->yes=createNode("is she married?");
    root->no->yes->no=createNode("is she called milky beauty?");
    root->no->yes->yes=createNode("does she have a child?");
    root->no->yes->yes->yes=createNode("Kajal Agarwal");
    root->no->yes->yes->no=createNode("divorced");
    root->no->yes->yes->no->yes=createNode("Samantha");
    root->no->yes->no->yes=createNode("tamanna");

    root->yes = createNode("Is you actor known for his dance?");
    root->yes->yes=createNode("Is your actor from mega family?");
    root->yes->yes->yes=createNode("Is your actor old?");
    root->yes->yes->yes->yes=createNode("Is your actor chiranjeevi?");//leaf node
    root->yes->yes->yes->no=createNode("Is your actor Allu arjun?");//leaf node

    root->yes->yes->no=createNode("Is your character know as man of masses?");
    root->yes->yes->no->yes=createNode("Is your character JR NTR");//leafe node
    root->yes->yes->no->no=createNode("Is your actor Ram pothineni?");//leaf node

    root->yes->no=createNode("Is you character famous for delivering movies with messages?");
    root->yes->no->yes=createNode("Is your character Mahesh Babu?");//leaf node;

    root->yes->no->no=createNode("IS your character from Nandamuri family?");
    root->yes->no->no->yes=createNode("Has your character made movie named starting or ending with the word 'simha' ");
    root->yes->no->no->yes->yes=createNode("Is your character Nandamuri Balakrishna?");//leaf node
    root->yes->no->no->yes->no=createNode("Has your actor ever produced or directed films?");
    root->yes->no->no->yes->no->yes=createNode("Is your character Nandamuri Kalyan ram?");//leaf node
    root->yes->no->no->yes->no->no=createNode("Is your character SR NTR?");//leaf node

    root->yes->no->no->no=createNode("Is your actor a self made Star?");
    root->yes->no->no->no->yes=createNode("Is your actor titled with tag 'Natural Star");
    root->yes->no->no->no->yes->yes=createNode("IS your actor Nani");//leaf node
    root->yes->no->no->no->yes->no=createNode("Is your actor famous for ditching sensor board");
    root->yes->no->no->no->yes->no->yes=createNode("Is your character Sree Vishnu?");
    root->yes->no->no->no->yes->no->no=createNode("Is your character famous with nick name 'Rowdy'?");
    root->yes->no->no->no->yes->no->no->yes = createNode("Is your actor Devarakonda vijay?");//leaf node
    root->yes->no->no->no->yes->no->no->no=createNode("Is your actor famous delivering dialouges fast and does most of the comedy in the film?");
    root->yes->no->no->no->yes->no->no->no->yes=createNode("Is your actor Naveen Polyshetty");
    root->yes->no->no->no->yes->no->no->no->no=createNode("does your actor make movies very often (for every 3 months)?");//leaf node
    root->yes->no->no->no->yes->no->no->no->no->yes=createNode("Is you actor Kiran Abbavarm?");//leaf node
    root->yes->no->no->no->yes->no->no->no->no->no=createNode("Is your actor main lead actor in movie 'RX 100'?");
    root->yes->no->no->no->yes->no->no->no->no->no->yes=createNode("Is your actor karthikeya");//leaf node
    root->yes->no->no->no->yes->no->no->no->no->no->no=createNode("Has you actor ever made a movie about a political leader? ");
    root->yes->no->no->no->yes->no->no->no->no->no->no->yes=createNode("Is your actor Rana Daggubati?");//leaf node
    root->yes->no->no->no->yes->no->no->no->no->no->no->no=createNode("Is your actor known for making family entertainer type movies?");
    root->yes->no->no->no->yes->no->no->no->no->no->no->no->yes=createNode("Is your actor Venkatesh? ");//leaf node
    root->yes->no->no->no->yes->no->no->no->no->no->no->no->no=createNode("Is your actor known for his nick name'Mass Maharaj'");
    root->yes->no->no->no->yes->no->no->no->no->no->no->no->no->yes=createNode("Is your character Ravi Teja");//leaf node
    root->yes->no->no->no->no=createNode("Is your actor from Mega Family?");
    root->yes->no->no->no->no->yes=createNode("Is your character Deputy CM of AP?");
    root->yes->no->no->no->no->yes->yes=createNode("Is your character Pawn Kalyan");//leaf node
    root->yes->no->no->no->no->yes->no=createNode("had your charcter acted in movies directed by SS Rajamouli?");
    root->yes->no->no->no->no->yes->no->yes=createNode("Is your character Ram charan?");//leaf node
    root->yes->no->no->no->no->yes->no->no=createNode("Is your character Sai Dharam Tej?");//leaf node

    root->yes->no->no->no->no->no=createNode("does your is (or) might become the owner of annpurna studios?");
    root->yes->no->no->no->no->yes=createNode("Is your actor over 60 years in age?");
    root->yes->no->no->no->no->yes->yes=createNode("Is your actor Akkineni Nagarjuna?");//leaff node
    root->yes->no->no->no->no->yes->no=createNode("Did your actor ever marry his co-actress?");
    root->yes->no->no->no->no->yes->no->yes=createNode("Is your actor Akkineni Nagachaithanya?");//leaf node
    root->yes->no->no->no->no->yes->no->no=createNode("Is your actor Akkineni Akhil?");//leaf node

    root->yes->no->no->no->no->no->no=createNode("does your character or his family own a college?");
    root->yes->no->no->no->no->no->no->yes=createNode("Is your actor an out cast from his own family?");
    root->yes->no->no->no->no->no->no->yes->yes=createNode("Is your actor Manchu manoj?");//leaf node
    root->yes->no->no->no->no->no->no->yes->no=createNode("Is your actor chairman of a college?");
    root->yes->no->no->no->no->no->no->yes->no->yes=createNode("Is your actor Mohan Babu?");//leaf node
    root->yes->no->no->no->no->no->no->yes->no->no=createNode("Is your actor Manchu Vishnu?");//leaf node

    root->yes->no->no->no->no->no->no->no=createNode("Is your actor lead actor in movie 'Bahubali'?");
    root->yes->no->no->no->no->no->no->no->yes=createNode("Is your actor Prabas?");
    root->yes->no->no->no->no->no->no->no->no=createNode("is the answer different?");
    
 return root;
}   
int main() {
    printf("think of your favourite actor in Telugu filim industry\n");

    // Build the decision tree
    Node* root = buildTree();

    // Start the game
    traverseTree(root);

return 0;
}
