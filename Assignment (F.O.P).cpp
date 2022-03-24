//#include <iostream>
//using namespace std;
//
//int ferryPenang[9][5][11] = { 0 };
//int ferryLangkawi[9][5][11] = { 0 };
//
//void displayLangkawiSchedule()
//{
//	int pFerryNo, dTime, aTime;
//	pFerryNo = 1;
//	dTime = 7;
//	aTime = 9;
//	cout << "\t Langkawi Time Schedules " << endl;
//
//	cout << " From: " << "\t" << "PENANG" << "  ||  " << "To:" << "\t" << "LANGKAWI" << endl;
//	cout << "Ferry No" << "   Departure Time   " << "   Arrival Time   " << endl;
//
//	while (pFerryNo <= 8)
//	{
//		cout << " F00" << pFerryNo << " \t\t " << dTime << ":00" << " \t\t " << aTime << ":00" << endl;
//		pFerryNo++;
//		dTime += 2;
//		aTime += 2;
//	}
//}
//
//void displayPenangSchedule()
//{
//	int lFerryNo, dTime, aTime;
//
//	lFerryNo = 1;
//	dTime = 10;
//	aTime = 12;
//
//	cout << "\t Penang Time Schedules " << endl;
//
//	cout << " From: " << "\t" << "LANGKAWI" << "  ||  " << "To:" << "\t" << "PENANG" << endl;
//	cout << "Ferry No" << "   Departure Time   " << "   Arrival Time   " << endl;
//	cout << " F008" << " \t\t " << "8:00" << " \t\t " << "10:00" << endl;
//
//	while (lFerryNo <= 7)
//	{
//		cout << " F00" << lFerryNo << " \t\t " << dTime << ":00" << " \t\t " << aTime << ":00" << endl;
//		lFerryNo++;
//		dTime += 2;
//		aTime += 2;
//	}
//}
//
//void displayFerrySeat(string& destination)
//{
//	for (int a = 1; a < 9; a++)
//	{
//		cout << "Ferry number: " << a << endl;
//		for (int b = 0; b < 5; b++)
//		{
//			if (b == 0)
//			{
//				cout << "Seat number\t";
//			}
//			else
//			{
//				cout << "Deck NO " << b << "\t";
//			}
//			for (int c = 1; c < 11; c++)
//			{
//				if (b == 0)
//				{
//					cout << c << "\t";
//				}
//				else
//				{
//					if (destination == "L" || destination == "l")
//						cout << ferryLangkawi[a][b][c] << "\t";
//					else if (destination == "P" || destination == "p")
//						cout << ferryPenang[a][b][c] << "\t";
//				}
//			}
//			cout << endl;
//		}
//		cout << endl;
//	}
//}
//
//void oWayTicketPrice()
//{
//	cout << "--------------------------One Way Ferry Ticket--------------------------" << endl;
//	cout << " \t \t Adult   \tSenior Citizen   \tChild" << endl;
//	cout << "\t \t \t    (above 60 years old)  (3 - 11 years old)" << endl;
//	cout << "Upper Deck \tRM 80.00 \t   RM 65.00  \t\tRM 65.00" << endl;
//	cout << "Lower Deck \tRM 60.00 \t   RM 45.00  \t\tRM 45.00" << endl;
//	cout << "------------------------------------------------------------------------" << endl;
//}
//
//void returnTicketPrice()
//{
//	cout << "---------------------------Return Ferry Ticket--------------------------" << endl;
//	cout << " \t \t Adult   \tSenior Citizen   \tChild" << endl;
//	cout << "\t \t \t    (above 60 yesrs old)  (3 - 11 years old)" << endl;
//	cout << "Upper Deck \tRM 150.00 \t   RM 120.00  \t\tRM 120.00" << endl;
//	cout << "Lower Deck \tRM 110.00 \t   RM 80.00  \t\tRM 80.00" << endl;
//	cout << "------------------------------------------------------------------------" << endl;
//}
//
//void oneWayFamilyPackage()
//{
//	cout << "------Family Package (2 Adults + 2 Childs)------" << endl;
//	cout << " \t \t \t One Way Tickets " << endl;
//	cout << "Upper Deck \t  \t -" << endl;
//	cout << "Lower Deck \t \t RM 195.00" << endl;
//	cout << "------------------------------------------------" << endl;
//}
//
//void returnFamilyPackage()
//{
//	cout << "------Family Package (2 Adults + 2 Childs)------" << endl;
//	cout << " \t \t \t Return Tickets " << endl;
//	cout << "Upper Deck \t  \t -" << endl;
//	cout << "Lower Deck \t \t RM 365.00" << endl;
//	cout << "------------------------------------------------" << endl;
//}
//
//void foodAndDrinksMenu()
//{
//	cout << "-------------Food & Drinks Menu-----------" << endl;
//	cout << " \t \t \t Prices " << endl;
//	cout << "Meal(per combo) \t RM 17.00" << endl;
//	cout << "Salad \t \t \t RM 12.00" << endl;
//	cout << "Fruit Buffet \t \t RM 12.00" << endl;
//	cout << "Bread \t \t \t RM 5.00" << endl;
//	cout << "Snacks(each) \t \t RM 10.00" << endl;
//	cout << "Tea/Coffee \t \t RM 5.00" << endl;
//	cout << "Fruit Juice \t \t RM 10.00" << endl;
//	cout << "Wine(souvenir) \t \t RM 125.00" << endl;
//	cout << "------------------------------------------" << endl;
//}
//
//void selectTicket(int& noAdult, int& noSeCitizen, int& noChild, int& iTotalPeopleTravel)
//{
//	string adult, seCitizen, child;
//
//	noAdult, noSeCitizen, noChild, iTotalPeopleTravel = 0;
//
//
//	cout << "Are there any adult? (Y/N): "; cin >> adult;
//
//	while (!(adult == "Y" || adult == "y"))
//	{
//		cout << " Try Again! ";
//		cout << endl;
//		cout << "Are there any adult? (Y/N): "; cin >> adult;
//
//	}
//
//	if (adult == "Y" || adult == "y")
//	{
//		cout << "Please enter the number of adults: "; cin >> noAdult; //收到 0 或 negative number 的时候可以考虑做 error message
//		cin.clear();
//		cin.ignore(10000, '\n');
//	}
//	else if (!(adult == "Y" || adult == "y")) //不需要, 因为你已经在上面 loop 过了所以不会错
//	{
//		cout << " Sorry, it's error! ";
//	}
//
//	cout << endl;
//	cout << "Are there any senior citizen? (Y/N): "; cin >> seCitizen;
//
//	while (!(seCitizen == "Y" || seCitizen == "y" || seCitizen == "N" || seCitizen == "n"))
//	{
//		cout << " Try Again! ";
//		cout << endl;
//		cout << "Are there any senior citizen? (Y/N): "; cin >> seCitizen;
//
//	}
//
//	if (seCitizen == "Y" || seCitizen == "y")
//	{
//		cout << "Please enter the number of senior citizen: ";  cin >> noSeCitizen;
//		cin.clear();
//		cin.ignore(10000, '\n');
//	}
//	else if (seCitizen == "N" || seCitizen == "n")
//	{
//		noSeCitizen = 0;
//		cout << "Please enter the number of senior citizen: " << noSeCitizen << endl;
//		cout << endl;
//	}
//
//	cout << endl;
//	cout << "Are there any child? (Y/N): "; cin >> child;
//
//	while (!(child == "Y" || child == "y" || child == "N" || child == "n"))
//	{
//		cout << " Try Again! ";
//		cout << endl;
//		cout << "Are there any child? (Y/N): "; cin >> child;
//
//	}
//
//	if (child == "Y" || child == "y")
//	{
//		cout << "Please enter the number of child: "; cin >> noChild;
//		cin.clear();
//		cin.ignore(10000, '\n');
//	}
//	else if (child == "N" || child == "n")
//	{
//		noChild = 0;
//		cout << "Please enter the number of child: " << noChild << endl;
//		cout << endl;
//	}
//
//	cout << endl;
//	iTotalPeopleTravel = noAdult + noSeCitizen + noChild;
//	cout << "Total number of people travelled: " << iTotalPeopleTravel << endl;
//}
//
//int main()
//{
//	string destination, ticket, addTicket, foodDrinks, selectSeat, nextCustomer;
//	int ferryNo, deckNo, seatNo, ticketEntry, noAdult, noSeCitizen, noChild, meal, salad, fBuffet, bread, snacks, teaCoffee, fJuice, wine, fTotalPeopleTravel, totalQuFoodDrinks;
//	int i1WayTotalPrice, i234WayTotalPrice, fWayTotalPrice, fAddWayTotalPrice, i1ReturnTotalPrice, i234ReturnTotalPrice, fReturnTotalPrice, f234AddReturnTotalPrice, totalOrderPrice1, totalOrderPrice2, nTotalOrderPrice;
//	int overallOrderPrice, overallPay1, overallPay2, overallPay3, overallPay4, overallPay5, overallPay6, overallPay7, overallPay8, overallPayCustomer;
//
//	ferryNo = 1;
//	noAdult, noChild, noSeCitizen, fTotalPeopleTravel = 0, totalQuFoodDrinks = 0;
//	meal, salad, fBuffet, bread, snacks, teaCoffee, fJuice, wine = 0;
//	i1WayTotalPrice = 0, i234WayTotalPrice = 0, fWayTotalPrice = 0, fAddWayTotalPrice = 0, i1ReturnTotalPrice = 0, i234ReturnTotalPrice = 0, fReturnTotalPrice = 0, f234AddReturnTotalPrice = 0, totalOrderPrice1 =0, totalOrderPrice2=0, nTotalOrderPrice = 0;
//	overallOrderPrice = 0, overallPay1 = 0, overallPay2 = 0, overallPay3 = 0, overallPay4 = 0, overallPay5 = 0, overallPay6 = 0, overallPay7 = 0, overallPay8 = 0, overallPayCustomer = 0;
//
//	cout << "welcome to the Ferry Travelling Company!" << endl;
//	cout << endl;
//
//	do {
//		totalOrderPrice1 = 0, overallOrderPrice = 0;
//
//		cout << "Please enter your ferry ticket's entry (One way - 1 or Return - 2): ";
//		cin >> ticketEntry;
//		cin.clear();
//		cin.ignore(10000, '\n');
//
//		while (!(ticketEntry == 1 || ticketEntry == 2))
//		{
//			cout << endl;
//			cout << "Sorry, try again!";
//			cout << endl;
//			cout << "Please re-enter your ferry ticket's entry (One way - 1 or Return - 2): ";
//			cin >> ticketEntry;
//			cin.clear();
//			cin.ignore(10000, '\n');
//
//		}
//
//		cout << endl;
//
//		cout << "Please enter your destination (L - Langkawi or P - Penang) : "; cin >> destination;
//
//		while (!(destination == "L" || destination == "l" || destination == "P" || destination == "p"))
//		{
//			cout << "Sorry, there's no such destination!" << endl;
//			cout << endl;
//			cout << "Please enter your destination (L - Langkawi or P - Penang) : " << endl;
//			cout << endl;
//			cin >> destination;
//		}
//
//		if (destination == "L" || destination == "l")
//		{
//			displayLangkawiSchedule();
//		}
//		else if (destination == "P" || destination == "p")
//		{
//			displayPenangSchedule();
//		}
//
//		cout << endl;
//
//		cout << "Please enter your ferry number (1 to 8) : ";
//		cout << "F00"; cin >> ferryNo;
//		cin.clear();
//		cin.ignore(10000, '\n');
//
//		cout << endl;
//
//		while (ferryNo > 8 || ferryNo < 1)
//		{
//			cout << "Sorry, your ferry number is incorrect..." << endl;
//			cout << endl;
//			cout << "Please re-enter your ferry number (1 to 8) : ";
//			cout << "F00"; cin >> ferryNo;
//			cin.clear();
//			cin.ignore(10000, '\n');
//
//		}
//
//		cout << endl;
//
//		if (ticketEntry == 1)
//		{
//			oWayTicketPrice();
//			oneWayFamilyPackage();
//		}
//		else if (ticketEntry == 2)
//		{
//			returnTicketPrice();
//			returnFamilyPackage();
//		}
//
//		cout << endl;
//
//		cout << "Please select your ticket (Individual - I or Family Package - F): ";
//		cin >> ticket;
//
//		cout << endl;
//
//		while (!(ticket == "I" || ticket == "i" || ticket == "F" || ticket == "f"))
//		{
//			cout << "Sorry, Try again!" << endl;
//			cout << endl;
//			cout << "Please select your ticket (Individual - I or Family Package - F): ";
//			cin >> ticket;
//		}
//
//		cout << endl;
//
//		if (ticket == "I" || ticket == "i")
//		{
//			selectTicket(noAdult, noSeCitizen, noChild, fTotalPeopleTravel);
//		}
//		else if (ticket == "F" || ticket == "f")
//		{
//			cout << "Are there any adult? (Y/N): Y" << endl;
//			cout << "Please enter the number of adult: 2" << endl;
//			cout << endl;
//			cout << "Are there any senior citizen? (Y/N): N" << endl;
//			cout << "Please enter the number of senior citizen: 0" << endl;
//			cout << endl;
//			cout << "Are there any child? (Y/N): Y" << endl;
//			cout << "Please enter the number of child: 2" << endl;
//			cout << endl;
//			cout << "Do you need to add any ticket? (Y/N): "; cin >> addTicket;
//			cout << endl;
//
//			if (addTicket == "Y" || addTicket == "y")
//			{
//
//				cout << "Please enter the addition of adult: "; cin >> noAdult;
//				cin.clear();
//				cin.ignore(10000, '\n');
//				cout << endl;
//				cout << "Please enter the addition of senior citizen: "; cin >> noSeCitizen;
//				cin.clear();
//				cin.ignore(10000, '\n');
//				cout << endl;
//				cout << "Please enter the addition of child: "; cin >> noChild;
//				cin.clear();
//				cin.ignore(10000, '\n');
//				cout << endl;
//
//			}
//			else if (addTicket == "N" || addTicket == "n")
//			{
//				cout << endl;
//				cout << "There's no added any ticket!" << endl;
//			}
//
//
//			cout << "Total number of people travelled: ";
//			if ((ticket == "F" || ticket == "f") && (addTicket == "Y" || addTicket == "y"))
//			{
//				fTotalPeopleTravel = noAdult + noSeCitizen + noChild + 4;
//				cout << fTotalPeopleTravel << endl;
//			}
//			else if (ticket == "F" || ticket == "f")
//			{
//				cout << "4" << endl;
//			}
//
//		}
//
//
//
//		cout << endl;
//		cout << "========================== Please select your ferry seat below: ==========================" << endl;
//		displayFerrySeat(destination);
//		cout << "==========================================================================================" << endl;
//
//		cout << "Ferry No: F00" << ferryNo << endl;
//		cout << "Deck No (Upper Deck - 1 or Lower Deck - 2 to 4): "; cin >> deckNo;
//		cin.clear();
//		cin.ignore(10000, '\n');
//
//		while (deckNo > 4 || deckNo < 1)
//		{
//			cout << "Sorry, your deck number is invalid!" << endl;
//			cout << endl;
//			cout << "Deck No: "; cin >> deckNo;
//			cin.clear();
//			cin.ignore(10000, '\n');
//		}
//
//		cout << "Seat No (1 to 10): "; cin >> seatNo;
//		cin.clear();
//		cin.ignore(10000, '\n');
//
//		while (seatNo < 1 || seatNo > 10)
//		{
//			cout << "Sorry, your seat number is invalid!" << endl;
//			cout << endl;
//			cout << "Seat No: "; cin >> seatNo;
//			cin.clear();
//			cin.ignore(10000, '\n');
//		}
//		cout << endl;
//
//		cout << "Ticket ID: F00" << ferryNo << "-" << deckNo << "-" << seatNo << endl;
//
//		cout << endl;
//
//		if (destination == "P" || destination == "p")
//		{
//			if (ferryPenang[ferryNo][deckNo][seatNo] == 0)
//			{
//				ferryPenang[ferryNo][deckNo][seatNo] = 1;
//				displayFerrySeat(destination);
//			}
//			else
//			{
//				cout << endl;
//				cout << "The seat is taken by someone!";
//				cout << "Please choose your seat again...";
//			}
//		}
//
//		if (destination == "L" || destination == "l")
//		{
//			if (ferryLangkawi[ferryNo][deckNo][seatNo] == 0)
//			{
//				ferryLangkawi[ferryNo][deckNo][seatNo] = 1;
//				displayFerrySeat(destination);
//			}
//			else
//			{
//				cout << endl;
//				cout << "The seat is taken by someone!";
//				cout << "Please choose your seat again...";
//			}
//		}
//
//		cout << endl;
//
//		cout << "Do you need any food or drinks? (Y/N): "; cin >> foodDrinks;
//		cout << endl;
//
//		if (foodDrinks == "Y" || foodDrinks == "y")
//		{
//			foodAndDrinksMenu();
//			cout << " \t \t \t Quantity " << endl;
//			cout << "Meal(per combo) \t "; cin >> meal;
//			cin.clear();
//			cin.ignore(10000, '\n');
//			cout << "Salad \t \t \t "; cin >> salad;
//			cin.clear();
//			cin.ignore(10000, '\n');
//			cout << "Fruit Buffet \t \t "; cin >> fBuffet;
//			cin.clear();
//			cin.ignore(10000, '\n');
//			cout << "Bread \t \t \t "; cin >> bread;
//			cin.clear();
//			cin.ignore(10000, '\n');
//			cout << "Snacks(each) \t \t "; cin >> snacks;
//			cin.clear();
//			cin.ignore(10000, '\n');
//			cout << "Tea/Coffee \t \t "; cin >> teaCoffee;
//			cin.clear();
//			cin.ignore(10000, '\n');
//			cout << "Fruit Juice \t \t "; cin >> fJuice;
//			cin.clear();
//			cin.ignore(10000, '\n');
//			cout << "Wine(souvenir) \t \t "; cin >> wine;
//			cin.clear();
//			cin.ignore(10000, '\n');
//		}
//		else if (foodDrinks == "N" || foodDrinks == "n")
//		{
//			cout << "There's no added food and drinks!" << endl;
//		}
//
//		cout << endl;
//		cout << "Total ordered of food & drinks: ";
//
//		if (foodDrinks == "Y" || foodDrinks == "y")
//		{
//			totalQuFoodDrinks = meal + salad + fBuffet + bread + snacks + teaCoffee + fJuice + wine;
//			cout << totalQuFoodDrinks << endl;
//		}
//		else if (foodDrinks == "N" || foodDrinks == "n")
//		{
//			cout << "0" << endl;
//		}
//
//		cout << endl;
//
//		cout << "Total price of food & drinks ordered: ";
//		if (foodDrinks == "Y" || foodDrinks == "y")
//		{
//			totalOrderPrice1 += meal * 17 + salad * 12 + fBuffet * 12 + bread * 5 + snacks * 10 + teaCoffee * 5 + fJuice * 10 + wine * 125;
//			overallOrderPrice += meal * 17 + salad * 12 + fBuffet * 12 + bread * 5 + snacks * 10 + teaCoffee * 5 + fJuice * 10 + wine * 125;
//			cout << "RM" << totalOrderPrice1 << ".00" << endl;
//		}
//		else if (foodDrinks == "N" || foodDrinks == "n")
//		{
//			cout << nTotalOrderPrice << endl;
//		}
//
//		cout << endl;
//
//		cout << "-------------------Ferry Ticket-----------------" << endl;
//		cout << "\t Welcome to Ferry Travelling Company! \t" << endl;
//		cout << endl;
//		cout << "\t \t \tTicket ID: F00" << ferryNo << "-" << deckNo << "-" << seatNo << endl;
//		cout << endl;
//		cout << "Destination: ";
//		if (destination == "L" || destination == "l")
//		{
//			cout << "LANGKAWI" << endl;
//		}
//		else if (destination == "P" || destination == "p")
//		{
//			cout << "PENANG" << endl;
//		}
//
//		cout << endl;
//
//		cout << "Food & Drinks? :";
//		if (foodDrinks == "Y" || foodDrinks == "y")
//		{
//			cout << "YES" << endl;
//		}
//		else if (foodDrinks == "N" || foodDrinks == "n")
//		{
//			cout << "No" << endl;
//		}
//
//		cout << endl;
//
//		cout << "Hope You Enjoy Your trip! \t\t" << endl;
//		cout << "------------------------------------------------" << endl;
//
//		cout << endl;
//
//		do
//		{
//			for (int a = 1; a <= --fTotalPeopleTravel; a++)
//			{
//				totalOrderPrice1 = 0;
//				cout << endl;
//				cout << "Do you want to continue to select your ferry seat? (Y/n): "; cin >> selectSeat;
//
//				while (!(selectSeat == "Y" || selectSeat == "y" || selectSeat == "N" || selectSeat == "n"))
//				{
//					cout << "Sorry, try again!" << endl;
//					cout << endl;
//					cout << "Do you want to continue the selection of ferry seat? (Y/N): "; cin >> selectSeat;
//				}
//
//				cout << endl;
//
//				if (selectSeat == "Y" || selectSeat == "y")
//				{
//					cout << endl;
//
//					cout << "========================== Please select your ferry seat below: ==========================" << endl;
//					displayFerrySeat(destination);
//					cout << "==========================================================================================" << endl;
//
//					cout << endl;
//
//					cout << "Ferry No: F00" << ferryNo << endl;
//
//					cout << "Deck No (Upper Deck - 1 or Lower Deck - 2 to 4): "; cin >> deckNo;
//					cin.clear();
//					cin.ignore(10000, '\n');
//
//					while (deckNo > 4 || deckNo < 1)
//					{
//						cout << "Sorry, your deck number is invalid!" << endl;
//						cout << endl;
//						cout << "Deck No: "; cin >> deckNo;
//						cin.clear();
//						cin.ignore(10000, '\n');
//					}
//
//					cout << "Seat No (1 to 10): "; cin >> seatNo;
//					cin.clear();
//					cin.ignore(10000, '\n');
//
//					while (seatNo < 1 || seatNo > 10)
//					{
//						cout << endl;
//						cout << "Sorry, your seat number is invalid!" << endl;
//						cout << endl;
//						cout << "Seat No: "; cin >> seatNo;
//						cin.clear();
//						cin.ignore(10000, '\n');
//					}
//
//					cout << endl;
//
//					cout << "Ticket ID: F00" << ferryNo << "-" << deckNo << "-" << seatNo << endl;
//					cout << endl;
//
//					if (destination == "P" || destination == "p")
//					{
//						if (ferryPenang[ferryNo][deckNo][seatNo] == 0)
//						{
//							ferryPenang[ferryNo][deckNo][seatNo] = 1;
//							displayFerrySeat(destination);
//
//							cout << endl;
//
//							cout << "Do you need any food or drinks? (Y/N): "; cin >> foodDrinks;
//							cout << endl;
//
//							if (foodDrinks == "Y" || foodDrinks == "y")
//							{
//								foodAndDrinksMenu();
//								cout << " \t \t \t Quantity " << endl;
//								cout << "Meal(per combo) \t "; cin >> meal;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Salad \t \t \t "; cin >> salad;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Fruit Buffet \t \t "; cin >> fBuffet;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Bread \t \t \t "; cin >> bread;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Snacks(each) \t \t "; cin >> snacks;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Tea/Coffee \t \t "; cin >> teaCoffee;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Fruit Juice \t \t "; cin >> fJuice;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Wine(souvenir) \t \t "; cin >> wine;
//								cin.clear();
//								cin.ignore(10000, '\n');
//							}
//							else if (foodDrinks == "N" || foodDrinks == "n")
//							{
//								cout << "There's no added food and drinks!" << endl;
//							}
//
//							cout << endl;
//							cout << "Total ordered of food & drinks: ";
//
//							if (foodDrinks == "Y" || foodDrinks == "y")
//							{
//								totalQuFoodDrinks = meal + salad + fBuffet + bread + snacks + teaCoffee + fJuice + wine;
//								cout << totalQuFoodDrinks << endl;
//							}
//							else if (foodDrinks == "N" || foodDrinks == "n")
//							{
//								cout << "0" << endl;
//							}
//
//							cout << endl;
//
//							cout << "Total price of food & drinks ordered: ";
//							if (foodDrinks == "Y" || foodDrinks == "y")
//							{
//								totalOrderPrice1 += meal * 17 + salad * 12 + fBuffet * 12 + bread * 5 + snacks * 10 + teaCoffee * 5 + fJuice * 10 + wine * 125;
//								cout << "RM" << totalOrderPrice1 << ".00" << endl;
//							}
//							else if (foodDrinks == "N" || foodDrinks == "n")
//							{
//								cout << nTotalOrderPrice << endl;
//							}
//
//							cout << endl;
//
//							cout << "-------------------Ferry Ticket-----------------" << endl;
//							cout << "\t Welcome to Ferry Travelling Company! \t" << endl;
//							cout << endl;
//							cout << "\t \t \tTicket ID: F00" << ferryNo << "-" << deckNo << "-" << seatNo << endl;
//							cout << endl;
//							cout << "Destination: ";
//							if (destination == "L" || destination == "l")
//							{
//								cout << "LANGKAWI" << endl;
//							}
//							else if (destination == "P" || destination == "p")
//							{
//								cout << "PENANG" << endl;
//							}
//
//							cout << endl;
//
//							cout << "Food & Drinks? :";
//							if (foodDrinks == "Y" || foodDrinks == "y")
//							{
//								cout << "YES" << endl;
//							}
//							else if (foodDrinks == "N" || foodDrinks == "n")
//							{
//								cout << "No" << endl;
//							}
//
//							cout << endl;
//
//							cout << "Hope You Enjoy Your trip! \t\t" << endl;
//							cout << "------------------------------------------------" << endl;
//
//						}
//						else
//						{
//							cout << endl;
//							cout << "The seat is taken by someone!" << endl;
//							cout << "Please choose your seat again...";
//						}
//					}
//
//					if (destination == "L" || destination == "l")
//					{
//						if (ferryLangkawi[ferryNo][deckNo][seatNo] == 0)
//						{
//							ferryLangkawi[ferryNo][deckNo][seatNo] = 1;
//							displayFerrySeat(destination);
//
//							cout << endl;
//
//							cout << "Do you need any food or drinks? (Y/N): "; cin >> foodDrinks;
//							cout << endl;
//
//							if (foodDrinks == "Y" || foodDrinks == "y")
//							{
//								foodAndDrinksMenu();
//								cout << " \t \t \t Quantity " << endl;
//								cout << "Meal(per combo) \t "; cin >> meal;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Salad \t \t \t "; cin >> salad;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Fruit Buffet \t \t "; cin >> fBuffet;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Bread \t \t \t "; cin >> bread;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Snacks(each) \t \t "; cin >> snacks;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Tea/Coffee \t \t "; cin >> teaCoffee;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Fruit Juice \t \t "; cin >> fJuice;
//								cin.clear();
//								cin.ignore(10000, '\n');
//								cout << "Wine(souvenir) \t \t "; cin >> wine;
//								cin.clear();
//								cin.ignore(10000, '\n');
//							}
//							else if (foodDrinks == "N" || foodDrinks == "n")
//							{
//								cout << "There's no added food and drinks!" << endl;
//							}
//
//							cout << endl;
//							cout << "Total ordered of food & drinks: ";
//
//							if (foodDrinks == "Y" || foodDrinks == "y")
//							{
//								totalQuFoodDrinks = meal + salad + fBuffet + bread + snacks + teaCoffee + fJuice + wine;
//								cout << totalQuFoodDrinks << endl;
//							}
//							else if (foodDrinks == "N" || foodDrinks == "n")
//							{
//								cout << "0" << endl;
//							}
//
//							cout << endl;
//
//							cout << "Total price of food & drinks ordered: ";
//							if (foodDrinks == "Y" || foodDrinks == "y")
//							{
//								totalOrderPrice1 += meal * 17 + salad * 12 + fBuffet * 12 + bread * 5 + snacks * 10 + teaCoffee * 5 + fJuice * 10 + wine * 125;
//								cout << "RM" << totalOrderPrice1 << ".00" << endl;
//							}
//							else if (foodDrinks == "N" || foodDrinks == "n")
//							{
//								cout << nTotalOrderPrice << endl;
//							}
//
//							cout << endl;
//
//							cout << "-------------------Ferry Ticket-----------------" << endl;
//							cout << "\t Welcome to Ferry Travelling Company! \t" << endl;
//							cout << endl;
//							cout << "\t \t \tTicket ID: F00" << ferryNo << "-" << deckNo << "-" << seatNo << endl;
//							cout << endl;
//							cout << "Destination: ";
//							if (destination == "L" || destination == "l")
//							{
//								cout << "LANGKAWI" << endl;
//							}
//							else if (destination == "P" || destination == "p")
//							{
//								cout << "PENANG" << endl;
//							}
//
//							cout << endl;
//
//							cout << "Food & Drinks? :";
//							if (foodDrinks == "Y" || foodDrinks == "y")
//							{
//								cout << "YES" << endl;
//							}
//							else if (foodDrinks == "N" || foodDrinks == "n")
//							{
//								cout << "No" << endl;
//							}
//
//							cout << endl;
//
//							cout << "Hope You Enjoy Your trip! \t\t" << endl;
//							cout << "------------------------------------------------" << endl;
//						}
//						else
//						{
//							cout << endl;
//							cout << "The seat is taken by someone!" << endl;
//							cout << "Please choose your seat again...";
//						}
//					}
//
//					cout << endl;
//
//				}
//				else if (selectSeat == "N" || selectSeat == "n")
//				{
//					cout << "Your process is completed...	";
//					cout << endl;
//				}
//
//				overallOrderPrice += totalOrderPrice1 + nTotalOrderPrice;
//			}
//
//		} while (selectSeat == "Y" || selectSeat == "y");
//
//		cout << endl;
//
//		cout << "Overall ordered price: ";
//		cout << "RM" << overallOrderPrice << ".00" << endl;
//
//		cout << endl;
//
//		cout << "Total ticket's price: ";
//
//		if ((ticketEntry == 1) && (ticket == "I" || ticket == "i") && (deckNo == 1))
//		{
//			i1WayTotalPrice = noAdult * 80 + noSeCitizen * 65 + noChild * 65;
//			cout << "RM" << i1WayTotalPrice << ".00" << endl;
//		}
//		else if ((ticketEntry == 1) && (ticket == "I" || ticket == "i") && (deckNo == 2 || deckNo == 3 || deckNo == 4))
//		{
//			i234WayTotalPrice = noAdult * 60 + noSeCitizen * 45 + noChild * 45;
//			cout << "RM" << i234WayTotalPrice << ".00" << endl;
//		}
//		else if ((ticketEntry == 1) && (ticket == "F" || ticket == "f"))
//		{
//			fWayTotalPrice = 195;
//			cout << "RM" << fWayTotalPrice << ".00" << endl;
//		}
//		else if ((ticketEntry == 1) && (ticket == "F" || ticket == "f") && (deckNo == 2 || deckNo == 3 || deckNo == 4))
//		{
//			fAddWayTotalPrice = noAdult * 60 + noSeCitizen * 45 + noChild * 45 + 195;
//			cout << "RM" << fAddWayTotalPrice << ".00" << endl;
//		}
//		else if ((ticketEntry == 2) && (ticket == "I" || ticket == "i") && (deckNo == 1))
//		{
//			i1ReturnTotalPrice = noAdult * 150 + noSeCitizen * 120 + noChild * 120;
//			cout << "RM" << i1ReturnTotalPrice << ".00" << endl;
//		}
//		else if ((ticketEntry == 2) && (ticket == "I" || ticket == "i") && (deckNo == 2 || deckNo == 3 || deckNo == 4))
//		{
//			i234ReturnTotalPrice = noAdult * 110 + noSeCitizen * 80 + noChild * 80;
//			cout << "RM" << i234ReturnTotalPrice << ".00" << endl;
//		}
//		else if ((ticketEntry == 2) && (ticket == "F" || ticket == "f"))
//		{
//			fReturnTotalPrice = 365;
//			cout << "RM" << fReturnTotalPrice << ".00" << endl;
//		}
//		else if ((ticketEntry == 2) && (ticket == "F" || ticket == "f") && (deckNo == 2 || deckNo == 3 || deckNo == 4))
//		{
//			f234AddReturnTotalPrice = noAdult * 110 + noSeCitizen * 80 + noChild * 80 + 365;
//			cout << "RM" << f234AddReturnTotalPrice << ".00" << endl;
//		}
//
//		cout << endl;
//
//		cout << "Overall food & drinks ordered and ticket payment: ";
//
//		if ((ticketEntry == 1) && (ticket ==  "I" || ticket == "i") && (deckNo == 1))
//		{
//			overallPay1 = i1WayTotalPrice + overallOrderPrice;
//			cout << "RM" << overallPay1 << ".00" << endl;
//		}
//		else if ((ticketEntry == 1) && (ticket == "I" || ticket == "i") && (deckNo == 2 || deckNo == 3 || deckNo == 4))
//		{
//			overallPay2 = i234WayTotalPrice + overallOrderPrice;
//			cout << "RM" << overallPay2 << ".00" << endl;
//		}
//		else if ((ticketEntry == 1) && (ticket == "F" || ticket == "f"))
//		{
//			overallPay3 = fWayTotalPrice + overallOrderPrice;
//			cout << "RM" << overallPay3 << ".00" << endl;
//		}
//		else if ((ticketEntry == 1) && (ticket == "F" || ticket == "f") && (deckNo == 2 || deckNo == 3 || deckNo == 4))
//		{
//			overallPay4 = fAddWayTotalPrice + overallOrderPrice;
//			cout << "RM" << overallPay4 << ".00" << endl;
//		}
//		else if ((ticketEntry == 2) && (ticket == "I" || ticket == "i") && (deckNo == 1))
//		{
//			overallPay5 = i1ReturnTotalPrice + overallOrderPrice;
//			cout << "RM" << overallPay5 << ".00" << endl;
//		}
//		else if ((ticketEntry == 2) && (ticket == "I" || ticket == "i") && (deckNo == 2 || deckNo == 3 || deckNo == 4))
//		{
//			overallPay6 = i234ReturnTotalPrice + overallOrderPrice;
//			cout << "RM" << overallPay6 << ".00" << endl;
//		}
//		else if ((ticketEntry == 2) && (ticket == "F" || ticket == "f"))
//		{
//			overallPay7 = fReturnTotalPrice + overallOrderPrice;
//			cout << "RM" << overallPay7 << ".00" << endl;
//		}
//		else if ((ticketEntry == 2) && (ticket == "F" || ticket == "f") && (deckNo == 2 || deckNo == 3 || deckNo == 4))
//		{
//			overallPay8 = f234AddReturnTotalPrice + overallOrderPrice;
//			cout << "RM" << overallPay8 << ".00" << endl;
//		}
//
//		cout << endl;
//
//		overallPayCustomer += overallPay1 + overallPay2 + overallPay3 + overallPay4 + overallPay5 + overallPay6 + overallPay7 + overallPay8;
//		cout << "Overall payments for all customer: RM" << overallPayCustomer << ".00" << endl;
//
//		cout << endl;
//		
//		cout << "========================================================================================================" << endl;
//
//		cout << "Continue for next customer? (Y/N) :";
//		cin >> nextCustomer;
//
//		cout << endl;
//
//		while (!(nextCustomer == "Y" || nextCustomer == "y" || nextCustomer == "N" || nextCustomer == "n"))
//		{
//			cout << endl;
//			cout << "Sorry, try again!";
//			cout << endl;
//			cout << "Continue for next customer? (Y/N) :";
//			cin >> nextCustomer;
//			cout << endl;
//		}
//	} while (nextCustomer == "Y" || nextCustomer == "y");
//
//}
