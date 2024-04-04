#include<stdio.h>

// DECLARATION OF FUNCTIONS FOR THE ARRANGEMENT OF NUMBERS USING BUBBLE, SELECTION AND INSEERTION SORTS IN ASCENDING AND DESCENDING ORDER
int bubbleascending(); 
int bubbledescending();           
int insertionascending();       
int insertiondescending();         
int selectionascending();      
int selectiondescending();      
int sorts(); // DECLARED FUNCTION FOR SELECTING OUR DESIRED SORTING TECHNIQUE
int choice(); // DECLARED FUNCTION TO CHOOSE WHETHER TO CONTINUE OR EXIT
int bubble() { // DEFINED FUNCTION FOR BUBBLE SORT
    char order;
    printf("\nYOU HAVE CHOSEN BUBBLE SORT!\n");
    printf("\nPRESS ENTER TO CONTINUE!\n");
  
    do {
    printf("\nENTER YOUR DESIRED SORTING ORDER: \n"); // TO ENTER YOUR DESIRED ORDER OF SORTING
    printf("\nENTER 'A' FOR ASCENDING ORDER.\n");
    printf("ENTER 'D' FOR DESCENDING ORDER.\n\n");
    printf("PLEASE ENTER BLOCK LETTERS ONLY!\n\n");
    scanf("%s", &order);
    if (order == 'A') {
        bubbleascending(); // FUNCTION CALL FOR ARRANGING THE NUMBERS IN ASCENDING ORDER
        break;
    }
    else if (order == 'D') {
        bubbledescending(); // FUNCTION CALL FOR ARRANGING THE NUMBERS IN DESCENDING ORDER
        break;
    }
    else {
        printf("\nINVALID ORDER CHOSEN!\nPLEASE ENTER THE CORRECT CHOICE!\n"); // IN CASE OF INVALID CHOICE ENTERED
        printf("\nPRESS ENTER TO CONTINUE!\n");
       
    }
    } while (order != 'A' || order != 'D');
    return 0;
}
int insertion() { // DEFINED FUNCTION FOR INSERTION SORT 
    char order1;
    printf("\nYOU HAVE CHOSEN INSERTION SORT!\n");
    printf("\nPRESS ENTER TO CONTINUE!\n");
 
    do {
    printf("\nENTER YOUR DESIRED SORTING ORDER: \n"); // TO ENTER YOUR DESIRED ORDER OF SORTING
    printf("\nENTER 'A' FOR ASCENDING ORDER.\n");
    printf("ENTER 'D' FOR DESCENDING ORDER.\n\n");
    printf("PLEASE ENTER BLOCK LETTERS ONLY!\n\n");
    scanf("%s", &order1);
    if (order1 == 'A') {
        insertionascending(); // FUNCTION CALL FOR ARRANGING THE NUMBERS IN ASCENDING ORDER
        break;
    }
    else if (order1 == 'D') {
        insertiondescending(); // FUNCTION CALL FOR ARRANGING THE NUMBERS IN DESCENDING ORDER
        break;
    }
    else {
        printf("\nINVALID ORDER CHOSEN!\nPLEASE ENTER THE CORRECT CHOICE!\n"); // IN CASE OF INVALID CHOICE ENTERED
        printf("\nPRESS ENTER TO CONTINUE!\n");
      
    }
    } while (order1 != 'A' || order1 != 'D');
    return 0;
}
int selection() { // DEFINED FUNCTION FOR SELECTION SORT
    char order2;
    printf("\nYOU HAVE CHOSEN SELECTION SORT!\n");
    printf("\nPRESS ENTER TO CONTINUE!\n");

    do {
    printf("\nENTER YOUR DESIRED SORTING ORDER: \n"); // TO ENTER YOUR DESIRED ORDER OF SORTING
    printf("\nENTER 'A' FOR ASCENDING ORDER.\n");
    printf("ENTER 'D' FOR DESCENDING ORDER.\n\n");
    printf("PLEASE ENTER BLOCK LETTERS ONLY!\n\n");
    scanf("%s", &order2);
    if (order2 == 'A') {
        selectionascending(); // FUNCTION CALL FOR ARRANGING THE NUMBERS IN ASCENDING ORDER
        break;
    }
    else if (order2 == 'D') {
        selectiondescending(); // FUNCTION CALL FOR ARRANGING THE NUMBERS IN DESCENDING ORDER
        break;
    }
    else {
        printf("\nINVALID ORDER CHOSEN!\nPLEASE ENTER THE CORRECT CHOICE!\n"); // IN CASE OF INVALID CHOICE ENTERED
        printf("\nPRESS ENTER TO CONTINUE!\n");
      
    }
    } while (order2 != 'A' || order2 != 'D');
    return 0;
}
int bubbleascending() { // DEFINED FUNCTION FOR ARRANGING NUMBERS IN ASCENDING ORDER USING BUBBLE SORT TECHNIQUE
    int a[100], temp, i, j, n;
    char option;
    printf("\nYOU HAVE CHOSEN TO SORT THE ELEMENTS IN ASCENDING ORDER USING BUBBLE SORT!\n");
    printf("\nPRESS ENTER TO CONTINUE!\n");
 
    printf("\nENTER NUMBER OF ELEMENTS TO BE SORTED = ");
    scanf("%d", &n);
    printf("\nENTER THE ELEMENTS TO BE SORTED: \n\n");
    for (i=0; i<n; i++) {
        printf("ENTER a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i<n-1; i++) { // LOGIC USED FOR ARRANGING NUMBERS IN ASCENDING ORDER USING BUBBLE SORT TECHNIQUE
        for (j=0; j<n-i-1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nELEMENTS AFTER SORTING: \n\n");
    for (i=0; i<n; i++) {
        printf("a[%d] = %d\n", i, a[i]); // FOR PRINTING THE SORTED NUMBERS
    }
    printf("\nDO YOU WANT TO SEE THE LOGIC USED FOR THIS SORTING METHOD?\n");
    printf("\nENTER 'Y' IN CAPITAL TO DISPLAY THE LOGIC.\n");
    printf("ENTER ANY LETTER IF YOU DON'T WANT TO SEE THE LOGIC USED.\n\n");
    scanf("%s", &option);
    if (option == 'Y') {
    printf("\nTHE LOGIC USED FOR ASCENDING ORDER IN BUBBLE SORT: \n\n");
    printf("for (i=0; i<n-1; i++) {\n");
    printf("    for (j=0; j<n-i-1; j++) {\n");
    printf("        if (a[j] > a[j+1]) {\n");
    printf("            temp = a[j];\n");
    printf("            a[j] = a[j+1];\n");
    printf("            a[j+1] = temp;\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n");
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    else {
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    return 0;
}
int bubbledescending() { // DEFINED FUNCTION USED FOR ARRANGEMENT OF NUMBERS IN DESCENDING ORDER USING BUBBLE SORT TECHNIQUE
    int a[100], temp, i, j, n;
    char option1;
    printf("\nYOU HAVE CHOSEN TO SORT THE ELEMENTS IN DESCENDING ORDER USING BUBBLE SORT!\n\n");
    printf("\nPRESS ENTER TO CONTINUE!\n");
    
    printf("ENTER NUMBER OF ELEMENTS TO BE SORTED = ");
    scanf("%d", &n);
    printf("\nENTER THE ELEMENTS TO BE SORTED: \n\n");
    for (i=0; i<n; i++) {
        printf("ENTER a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i<n-1; i++) { // LOGIC USED FOR ARRANGING NUMBERS IN DESCENDING ORDER USING BUBBLE SORT TECHNIQUE
        for (j=0; j<n-i-1; j++) {
            if (a[j] < a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nELEMENTS AFTER SORTING: \n\n");
    for (i=0; i<n; i++) {
        printf("a[%d] = %d\n", i, a[i]); // FOR PRINTING THE SORTED NUMBERS
    }
    printf("\nDO YOU WANT TO SEE THE LOGIC USED FOR THIS SORTING METHOD?\n");
    printf("\nENTER 'Y' IN CAPITAL TO DISPLAY THE LOGIC.\n");
    printf("ENTER ANY LETTER IF YOU DON'T WANT TO SEE THE LOGIC USED.\n\n");
    scanf("%s", &option1);
    if (option1 == 'Y') {
    printf("\nTHE LOGIC USED FOR BUBBLE SORT IN DESCENDING ORDER: \n\n");
    printf("for (i=0; i<n-1; i++) {\n");
    printf("    for (j=0; j<n-i-1; j++) {\n");
    printf("        if (a[j] < a[j+1]) {\n");
    printf("            temp = a[j];\n");
    printf("            a[j] = a[j+1];\n");
    printf("            a[j+1] = temp;\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n");
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    else {
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    return 0;
}
int insertionascending() { // DEFINED FUNCTION FOR ARRANGING NUMBERS IN ASCENDING ORDER USING INSERTION SORT TECHNIQUE
    int a[100], temp, i, j, n;
    char option2;
    printf("\nYOU HAVE CHOSEN TO SORT THE ELEMENTS IN ASCENDING ORDER USING INSERTION SORT!\n");
    printf("\nPRESS ENTER TO CONTINUE!\n");
  
    printf("\nENTER NUMBER OF ELEMENTS TO BE SORTED = ");
    scanf("%d", &n);
    printf("\nENTER THE ELEMENTS TO BE SORTED: \n\n");
    for (i=0; i<n; i++) {
        printf("ENTER a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (i=1; i<n; i++) { // LOGIC USED FOR ARRANGING OF NUMBERS IN ASCENDING ORDER USING INSERTION SORT TECHNIQUE
        for (j=i; j>0; j--) {
            if(a[j-1] > a[j]) {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    printf("\nELEMENTS AFTER SORTING: \n\n");
    for (i=0; i<n; i++) {
        printf("a[%d] = %d\n", i, a[i]); // FOR PRINTING THE SORTED NUMBERS
    }
    printf("\nDO YOU WANT TO SEE THE LOGIC USED FOR THIS SORTING METHOD?\n");
    printf("\nENTER 'Y' IN CAPITAL TO DISPLAY THE LOGIC.\n");
    printf("ENTER ANY LETTER IF YOU DON'T WANT TO SEE THE LOGIC USED.\n\n");
    scanf("%s", &option2);
    if (option2 == 'Y') {
    printf("\nTHE LOGIC USED FOR INSERTION SORT IN ASCENDING ORDER: \n\n");
    printf("for (i=1; i<n; i++) {\n");
    printf("    for (j=i; j>0; j--) {\n");
    printf("        if(a[j-1] > a[j]) {\n");
    printf("            temp = a[j];\n");
    printf("            a[j] = a[j-1];\n");
    printf("            a[j-1] = temp;\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n");
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    else {
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    return 0;
}
int insertiondescending() { // DEFINED FUNCTION FOR ARRANGING NUMBERS IN DESCENDING ORDER USING INSERTION SORT TECHNIQUE
    int a[100], temp, i, j, n;
    char option3;
    printf("\nYOU HAVE CHOSEN TO SORT THE ELEMENTS IN DESCENDING ORDER USING INSERTION SORT!\n");
    printf("\nPRESS ENTER TO CONTINUE!\n");
    
    printf("\nENTER NUMBER OF ELEMENTS TO BE SORTED = ");
    scanf("%d", &n);
    printf("\nENTER THE ELEMENTS TO BE SORTED: \n\n");
    for (i=0; i<n; i++) {
        printf("ENTER a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (i=1; i<n; i++) { // LOGIC USED FOR ARRANGING OF NUMBERS IN DESCENDING ORDER USING INSERTION SORT TECHNIQUE
        for (j=i; j>0; j--) {
            if(a[j-1] < a[j]) {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    printf("\nELEMENTS AFTER SORTING: \n\n");
    for (i=0; i<n; i++) {
        printf("a[%d] = %d\n", i, a[i]); // FOR PRINTING THE SORTED NUMBERS
    }
    printf("\nDO YOU WANT TO SEE THE LOGIC USED FOR THIS SORTING METHOD?\n");
    printf("\nENTER 'Y' IN CAPITAL TO DISPLAY THE LOGIC.\n");
    printf("ENTER ANY LETTER IF YOU DON'T WANT TO SEE THE LOGIC USED.\n\n");
    scanf("%s", &option3);
    if (option3 == 'Y') {
    printf("\nTHE LOGIC USED FOR INSERTION SORT IN DESCENDING ORDER: \n\n");
    printf("for (i=1; i<n; i++) {\n");
    printf("    for (j=i; j>0; j--) {\n");
    printf("        if(a[j-1] < a[j]) {\n");
    printf("            temp = a[j];\n");
    printf("            a[j] = a[j-1];\n");
    printf("            a[j-1] = temp;\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n");
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    else {
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    return 0;
}
int selectionascending() { // DEFINED FUNCTION FOR THE ARRANGEMENT OF ELEMENTS IN ASCENDING ORDER USING SELECTION SORT TECHNIQUE
    int a[100], temp, i, j, n, choice4;
    char option4;
    printf("\nYOU HAVE CHOSEN TO SORT THE ELEMENTS IN ASCENDING ORDER USING SELECTION SORT!\n");
    printf("\nPRESS ENTER TO CONTINUE!\n");
 
    printf("\nENTER NUMBER OF ELEMENTS TO BE SORTED = ");
    scanf("%d", &n);
    printf("\nENTER THE ELEMENTS TO BE SORTED: \n\n");
    for (i=0; i<n; i++) {
        printf("ENTER a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i<n-1; i++) { // LOGIC USED FOR ARRANGING OF NUMBERS IN ASCENDING ORDER USING SELECTION SORT TECHNIQUE
        for (j=i+1; j<n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nELEMENTS AFTER SORTING: \n\n");
    for (i=0; i<n; i++) {
        printf("a[%d] = %d\n", i, a[i]); // FOR PRINTING THE SORTED NUMBERS
    }
    printf("\nDO YOU WANT TO SEE THE LOGIC USED FOR THIS SORTING METHOD?\n");
    printf("\nENTER 'Y' IN CAPITAL TO DISPLAY THE LOGIC.\n");
    printf("ENTER ANY LETTER IF YOU DON'T WANT TO SEE THE LOGIC USED.\n\n");
    scanf("%s", &option4);
    if (option4 == 'Y') {
    printf("\nTHE LOGIC USED SELECTION SORT IN ASCENDING ORDER: \n\n");
    printf("for (i=0; i<n-1; i++) {\n");
    printf("    for (j=i+1; j<n; j++) {\n");
    printf("        if(a[i] > a[j]) {\n");
    printf("            temp = a[i];\n");
    printf("            a[i] = a[j];\n");
    printf("            a[j] = temp;\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n");
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    else {
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    return 0;
}
int selectiondescending() { // DEFINED FUNCTION USED FOR ARRANGING ELEMENTS IN DESCENDING ORDER USING SELECTION SORT TECHNIQUE
    int a[100], temp, i, j, n, choice5;
    char option5;
    printf("\nYOU HAVE CHOSEN TO SORT THE ELEMENTS IN DESCENDING ORDER USING SELECTION SORT!\n");
    printf("\nPRESS ENTER TO CONTINUE!\n");
   
    printf("\nENTER NUMBER OF ELEMENTS TO BE SORTED = ");
    scanf("%d", &n);
    printf("\nENTER THE ELEMENTS TO BE SORTED: \n\n");
    for (i=0; i<n; i++) {
        printf("ENTER a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (i=0; i<n-1; i++) { // LOGIC USED FOR ARRANGING THE NUMBERS IN DESCENDING ORDER USING SELECTION SORT TECHNIQUE
        for (j=i+1; j<n; j++) {
            if(a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nELEMENTS AFTER SORTING: \n\n");
    for (i=0; i<n; i++) {
        printf("a[%d] = %d\n", i, a[i]); // FOR PRINTING THE SORTED NUMBERS
    }
    printf("\nDO YOU WANT TO SEE THE LOGIC USED FOR THIS SORTING METHOD?\n");
    printf("\nENTER 'Y' IN CAPITAL TO DISPLAY THE LOGIC.\n");
    printf("ENTER ANY LETTER IF YOU DON'T WANT TO SEE THE LOGIC USED.\n\n");
    scanf("%s", &option5);
    if (option5 == 'Y') {
    printf("\nTHE LOGIC USED FOR SELECTION SORT IN DESCENDING ORDER: \n\n");
    printf("for (i=0; i<n-1; i++) {\n");
    printf("    for (j=i+1; j<n; j++) {\n");
    printf("        if(a[i] < a[j]) {\n");
    printf("            temp = a[i];\n");
    printf("            a[i] = a[j];\n");
    printf("            a[j] = temp;\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n");
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    else {
    choice(); // FUNCTION CALL FOR A PERSON'S PREFERENCE WHETHER TO CONTINUE OR EXIT
    }
    return 0;
}
int main() {
    printf("\n***************WELCOME***************\n\n");
    sorts();
    return 0;
}
int sorts() { // DEFINED FUNCTION FOR SELECTING OUR DESIRED SORTING TECHNIQUE
    char method;
    printf("PRESS ENTER TO CONTINUE!\n");

    do {
    printf("\nENTER YOUR DESIRED SORTING METHOD:\n"); // TO ENTER YOUR DESIRED SORTING TECHNIQUE
    printf("\nENTER 'B' FOR BUBBLE SORT.\n");
    printf("ENTER 'I' FOR INSERTION SORT.\n");
    printf("ENTER 'S' FOR SELECTION SORT.\n\n");
    printf("PLEASE ENTER BLOCK LETTERS ONLY!\n\n");
    scanf("%s", &method);
    if (method == 'B') {
        bubble(); // FUNCTION CALL FOR BUBBLE SORT
        break;
    }
    else if (method == 'I') {
        insertion(); // FUNCTION CALL FOR INSERTION SORT
        break;
    }
    else if (method == 'S') {
        selection(); // FUNCTION CALL FOR SELECTION SORT
        break;
    }
    else {
        printf("\nINVALID OPTION CHOSEN!\nPLEASE ENTER THE CORRECT CHOICE!\n"); // IN CASE OF INVALID OPTION ENTERED
        printf("\nPRESS ENTER TO CONTINUE!\n");
       
    }
    } while (method != 'B' || method != 'I' || method != 'S');
    return 0;
}
int choice() { // DEFINED FUNCTION TO LET THE USER CHOOSE WHETHER TO CONTINUE OR EXIT
    int preference;
    printf("\nENTER '1' TO USE AGAIN.\n");
    printf("ENTER ANY NUMBER TO EXIT.\n\n");
    scanf("%d", &preference);
    if (preference == 1) {
        sorts(); // FUNCTION CALL FOR SELECTING OUR DESIRED SORTING TECHNIQUE
    }
    else {
        printf("\nTHANK YOU :)\n");
    }
    return 0;
}
