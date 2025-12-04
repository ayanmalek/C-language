
#include <stdio.h>
int main(){
	
	int sub;        // subject marks
	char grade;     // grade
	
	// input marks
	printf("\n Enter marks of subject out of 100 :");
	scanf("%d",&sub);
	
	// finding grade using ternary operator
	grade = (sub >= 90 && sub <= 100) ? 'A' :
	        (sub >= 70 && sub < 90)  ? 'B' :
	        (sub >= 50 && sub < 70)  ? 'C' :
	        (sub >= 35 && sub < 50)  ? 'D' : 'F';
    	
    // printing message based on grade
    switch(grade)
	{
		case 'A': printf("\n Grade A. Excellent work"); break;
		case 'B': printf("\n Grade B. Well done"); break;
        case 'C': printf("\n Grade C. Good job"); break;	
		case 'D': printf("\n Grade D. You passed but could do better"); break;
		case 'F': printf("\n Grade F. Failed"); break;		 		 		 	
	}	
	
    // check eligibility
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D'){
    	printf("\n You are eligible for next level");
	}
	else{
		printf("\n Please try next time");
	} 

	return 0;	
}

