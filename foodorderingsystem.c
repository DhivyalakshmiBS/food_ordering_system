#include<stdio.h>
int main(){
    char CustomerName[30];
    char deliveryType[15];
    char *food[20];
    char payment[20];
    char choice;
    float gstamt;
    long int PhoneNo;
    int category, itemChoice, price[20], quantity[20], subtotal;
    int bill = 0;
    int count = 0;
    printf("Enter the Customer Name: ");
    scanf("%s",CustomerName);
    printf("Enter the phone number: ");
    scanf("%ld",&PhoneNo);
    do{
        printf("===========FOOD CATEGORIES=========\n");
        printf("1. Pizza\n");
        printf("2. Burger\n");
        printf("3. Pasta\n");
        printf("4. Fries\n");
        printf("5. Drinks\n");
        printf("Enter the category number: ");
        scanf("%d",&category);
        switch(category){
            case 1:
                printf("Varieties of Pizza:\n");
                printf("1. Margherita        - ₹ 250\n");
                printf("2. Pepperoni         - ₹ 260\n");
                printf("3. Veg Supreme       - ₹ 275\n");
                printf("4. Chicken Pizza     - ₹ 300\n");
                printf("5. Farmhouse Pizza   - ₹ 315\n");
                break;
            case 2:
                printf("Varieties of Burger:\n");
                printf("1. Classic Burger    - ₹ 150\n");
                printf("2. Cheese Burger     - ₹ 160\n");
                printf("3. Veggie Burger     - ₹ 180\n");
                printf("4. Chicken Burger    - ₹ 210\n");
                printf("5. Double Patty      - ₹ 220\n");
                break;
            case 3:
                printf("Varieties of Pasta:\n");
                printf("1. White Sauce Pasta - ₹ 180\n");
                printf("2. Red Sauce Pasta   - ₹ 199\n");
                printf("3. Pesto Pasta       - ₹ 210\n");
                printf("4. Alfredo Pasta     - ₹ 230\n");
                printf("5. Arrabbiata Pasta  - ₹ 249\n");
                break;
            case 4:
                printf("Varieties of Fries:\n");
                printf("1. Classic Fries     - ₹ 69\n");
                printf("2. Cheese Fries      - ₹ 79\n");
                printf("3. Spicy Fries       - ₹ 99\n");
                printf("4. Garlic Fries      - ₹ 109\n");
                printf("5. Loaded Fries      - ₹ 130\n");
                break;
            case 5:
                printf("Varieties of Drinks:\n");
                printf("1. Cola              - ₹ 49\n");
                printf("2. Lemonade          - ₹ 49\n");
                printf("3. Pepsi             - ₹ 49\n");
                printf("4. Mojito            - ₹ 49\n");
                printf("5. Iced Tea          - ₹ 49\n");
                break;
            default:
                printf("Oopsss ! You entered wrong number");
        }
        printf("Enter the item number: ");
        scanf("%d",&itemChoice);
        if(category == 1){
            switch(itemChoice){
                case 1:
                    price[count] = 250;
                    food[count] = "Margherita";
                    break;
                case 2:
                    price[count] = 260;
                    food[count] = "Pepperoni";
                    break;
                case 3:
                    price[count] = 275;
                    food[count] = "Veg Supreme";
                    break;
                case 4:
                    price[count] = 300;
                    food[count] = "Chicken Pizza";
                    break;
                case 5:
                    price[count] = 315;
                    food[count] = "Farmhouse Pizza";
                    break;
                default:
                    printf("Oopsss ! You entered wrong number");
            }

        }
        else if(category == 2){
            switch(itemChoice){
                case 1:
                    price[count] = 150;
                    food[count] = "Classic Burger";
                    break;
                case 2: 
                    price[count] = 160;
                    food[count] = "Cheese Burger";
                    break;
                case 3:
                    price[count] = 180;
                    food[count] = "Veggie Burger";
                    break;
                case 4:
                    price[count] = 210;
                    food[count] = "Chicken Burger";
                    break;
                case 5:
                    price[count] = 220;
                    food[count] = "Double Patty";
                    break;
                default:
                    printf("Oopsss ! You entered wrong number");
            }
        }
        else if(category == 3){
            switch(itemChoice){
                case 1:
                    price[count] = 180;
                    food[count] = "White Sauce Pasta";
                    break;
                case 2:
                    price[count] = 199;
                    food[count] = "Red Sauce Pasta";
                    break;
                case 3:
                    price[count] = 210;
                    food[count] = "Pesto Pasta";
                    break;
                case 4:
                    price[count] = 230;
                    food[count] = "Alfredo Pasta";
                    break;
                case 5:
                    price[count] = 249;
                    food[count] = "Arrabbiata Pasta";
                    break;
                default:
                    printf("Oopsss ! You entered wrong number");
            }
        }
        else if(category == 4){
            switch(itemChoice){
                case 1:
                    price[count] = 69;
                    food[count] = "Classic Fries";
                    break;
                case 2:
                    price[count] = 79;
                    food[count] = "Cheese Fries";
                    break;
                case 3:
                    price[count] = 99;
                    food[count] = "Spicy Fries";
                    break;
                case 4:
                    price[count] = 109;
                    food[count] = "Garlic Fries";
                    break;
                case 5:
                    price[count] = 130;
                    food[count] = "Loaded Fries";
                    break;
                default:
                    printf("Oopsss ! You entered wrong number");
            }
        }
        else{
            switch(itemChoice){
                case 1:
                    price[count] = 49;
                    food[count] = "Cola";
                    break;
                case 2:
                    price[count] = 49;
                    food[count] = "Lemonade";
                    break;
                case 3:
                    price[count] = 49;
                    food[count] = "Pepsi";
                    break;
                case 4:
                    price[count] = 49;
                    food[count] = "Mojito";
                    break;
                case 5:
                    price[count] = 49;
                    food[count] = "Iced Tea";
                    break;
                default:
                    printf("Oopsss ! You entered wrong number");
            }
        }
        
        printf("Enter quantity: ");
        scanf("%d",&quantity[count]);
        subtotal = price[count] * quantity[count];
        bill += subtotal;
        printf("If you want to add any other items (Y/N): ");
        scanf(" %c",&choice);
        count++;
    }while(choice == 'Y' || choice == 'y');
    printf("Enter the delivery type(Dine In, Take away, Home delivery):");
    scanf("%s",deliveryType);
    printf("Enter the payment method(UPI, Cash, Card): ");
    scanf("%s",payment);
    gstamt = bill * 0.05;
    printf("\n===============================================\n");
    printf("           WELCOME TO OUR INN\n");
    printf("===============================================\n");

    printf("Customer Name : %s\n", CustomerName);
    printf("Phone Number  : %ld\n", PhoneNo);

    printf("\n--------------- ORDER DETAILS -----------------\n");
    printf("%-20s %-10s %-10s %-10s\n", "Food", "Qty", "Price", "Amount");

    for(int i = 0; i < count; i++)
    {
        printf("%-20s %-10d %-10d %-10d\n",
            food[i],
            quantity[i],
            price[i],
            quantity[i] * price[i]);
    }
    printf("-----------------------------------------------\n");
    printf("Bill Amount      : ₹ %d\n", bill);
    printf("GST (5%%)        : ₹ %.2f\n", gstamt);
    printf("Grand Total      : ₹ %.2f\n", bill + gstamt);
    printf("Delivery Type    : %s\n", deliveryType);
    printf("Payment Method   : %s\n", payment);
    printf("===============================================\n");
    printf("        THANK YOU! VISIT US AGAIN 😊\n");
    printf("===============================================\n");
    return 0;
    
}