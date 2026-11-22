#include <iostream>
#include <string>
#include <vector>

struct GuildData {
    std::string FirstName, LastName, YNChoice;
    int Age;
    int Choice;
    int classChoice, ClassFinalChoice;
    double x, y, z, sum;
    char op;
    std::vector<std::vector<std::string>> ClassList = { 
{"1", "Swordsman"},
{"2", "Warrior"},
{"3", "Knight"},
{"4", "Paladin"},
{"5", "Tank / Shield-Bearer"},
{"6", "Berserker"},
{"7", "Magic Knight / Spellblade"},
{"8", "Mage / Wizard"},
{"9", "Sage / Archmage"},
{"10", "Elementalist"},
{"11", "Necromancer"},
{"12", "Warlock"},
{"13", "Cleric / Priest"},
{"14", "Healer"},
{"15", "Bishop"},
{"16", "Archer"},
{"17", "Ranger / Hunter"},
{"18", "Assassin"},
{"19", "Thief / Rogue"},
{"20", "Monk / Martial Artist"},
{"21", "Summoner"},
{"22", "Tamer"},
{"23", "Alchemist"},
{"24", "Blacksmith"},
{"25", "Merchant"},
{"26", "Appraiser"},
{"27", "Pharmacist"},
{"28", "Chef"},
{"29", "Farmer"},
{"30", "Bard"},
{"31", "Enchanter Jobless / Unemployed"}

};

    std::vector<std::vector<std::string>> RankWiki = {
{"F-Rank", "45% of Adventurers", "Brand new recruit. Handles basic herb gathering and slime clearing."},
{"E-Rank", "25% of Adventurers", "Completed 10+ local errands. Trusted with basic escort missions."},
{"D-Rank", "15% of Adventurers", "Proven combat readiness. Can take on goblin camps and minor threats."},
{"C-Rank", "8% of Adventurers", "Veteran adventurer. Authorized for regional dungeon exploration."},
{"B-Rank", "4.5% of Adventurers", "Elite specialist. Capable of leading squads against major monsters."},
{"A-Rank", "2% of Adventurers", "Master of their craft. Nationally recognized hero."},
{"S-Rank", "0.5% of Adventurers", "Walking calamity. Reserved for world-saving threats."}
    };

};


GuildData MainDIsplay() {

    GuildData GD00;
   std::cout << R"(
  ██████╗ ██╗   ██╗██╗██╗     ██████╗ 
 ██╔════╝ ██║   ██║██║██║     ██╔══██╗
 ██║  ███╗██║   ██║██║██║     ██║  ██║  
 ██║   ██║██║   ██║██║██║     ██║  ██║
 ╚██████╔╝╚██████╔╝██║███████╗██████╔╝
  ╚═════╝  ╚═════╝ ╚═╝╚══════╝╚═════╝ 
    R E G I S T R A T I O N   S Y S T E M
     
+ _______________________ +
> Registerations (1)
> Rank Wikipedia (2)
> Contribution Team (3)
> Guild Calculator (4)
> Exit (9)
+ _______________________ +
   )" << "\n";

   std::cout << "Choice (1-9): "; std::cin >> GD00.Choice;

   return GD00;
   
}
GuildData AskToContinue() {
    GuildData GD01;

        int k = 0;

    while (k < 1) {

    std::cout << "\n";

    std:: cout << R"(
    > (Y) WILL TAKE YOU BACK TO MAIN MENU     
    > (N) EXIT THE REGISTRATIONS GUILD SYSTEM 
    )" << "\n"; 

    std::cout << "Wish To Continue? [Y/N]: ";  std::cin >> GD01.YNChoice;
    std::cout << "\n";

    if(GD01.YNChoice == "Y" || GD01.YNChoice == "y") {
        MainDIsplay();
    }

    else if (GD01.YNChoice == "N" || GD01.YNChoice == "n") {
        std::cout << "|   +  +  +   HAVE A GREAT ADVENTURE!   +  +  +   |" << "\n";
        std::cout << "| THANKS FOR USING OUR GUILD REGISTRATIONS SYSTEM |" << "\n"; 
        std::cout << "" << "\n";
        std::exit(0);
    }

    else {
        std::cout << "    | TRY AGAIN  |     ";
        std::cout << "[There Only have Y / N]";

    };

    k++;
    
  };

   return GD01;

}

GuildData RankWikipediaMenu() {
    GuildData GD2;

    std::cout << "\n=== GUILD RANK ENCYCLOPEDIA ===\n\n";
    for (int i = 0; i < GD2.RankWiki.size(); i++) {
        std::cout << "\n";
        std::cout << "[" << GD2.RankWiki[i][0] << "]" << " - " << "[" << GD2.RankWiki[i][1] << "]" << "\n";
        std::cout << GD2.RankWiki[i][2] << "\n";
    }

    AskToContinue();

    return GD2;
}



GuildData ContributionTeamMenu(){
     GuildData GD3;

    std::cout << R"(
    ┌──────────────────────────────────────────┐
    │       C O N T R I B U T E   T E A M      │
    └──────────────────────────────────────────┘
    )";

    std::cout << R"(
     > DESIGNER : ALIEF 
     > CODER    : ALIEF
     > IDEA     : ALIEF
     > CREATED DATE : [18/11/26] | TIME : [7.09 EVENING]
     ____________________________________________________
    )" << "\n";

    AskToContinue();

    return GD3;
}


GuildData GuildCalculatorMenu() {
    GuildData GD4;

    std::cout << R"(
    ┌──────────────────────────────────────────┐
    │      G U I L D   C A L C U L A T O R     │
    └──────────────────────────────────────────┘
+ ______________________ +
 > Additions (1)
 > Subtractions (2)
 > Multiplications (3)
 > Divisions (4)
+ ______________________ +
    )" << "\n";

    int f = 0;

    while (f < 1) {

    std::cout << "Choice (0-4): "; std::cin >> GD4.Choice;
    std::cout << "\n";

    std::cout << "Enter Your First Digit: "; std::cin >> GD4.x;
    std::cout << "Enter Your Second Digit: "; std::cin >> GD4.y;
    std::cout << "\n";

    if (GD4.Choice == 1) {
        GD4.sum = GD4.x + GD4.y;
    }

    else if (GD4.Choice == 2) {
        GD4.sum = GD4.x - GD4.y;
    }

    else if (GD4.Choice == 3) {
        GD4.sum = GD4.x * GD4.y;
    }

    else if (GD4.Choice == 4) {
        GD4.sum = GD4.x / GD4.y;
    }
    std::cout << R"(
┌──────────────────────────────────────────┐
│               A N S W E R                │
└──────────────────────────────────────────┘
    )" << "\n";
    std::cout << "> Result: " << GD4.sum << "\n";

    f++;
}
AskToContinue();

    return GD4;
}

GuildData RegisterationsMenu() {
    GuildData GD1;

std::cout << R"(
  ┌──────────────────────────────────────────┐
  │         R E G I S T R A T I O N S        │
  └──────────────────────────────────────────┘
      W E L C O M E   A D V E N T U R E R !
)" << "\n";

std::cout << "Name: "; std::cin >> GD1.FirstName;
std::cout << "Last Name: "; std::cin >> GD1.LastName;
std::cout << "Age: "; std::cin >> GD1.Age;

for (int i = 0; i < GD1.ClassList.size(); i++) {
    std::cout << "#" << GD1.ClassList[i][0] << " " << GD1.ClassList[i][1] << "\n"; 
}

std::cout << "Class Choice [1-31]: ";
std::cin >> GD1.classChoice; 

int ClassIndex = GD1.classChoice - 1;

if (ClassIndex >= 0 && ClassIndex < GD1.ClassList[ClassIndex].size()) {
    std::cout << "" << "\n";
}

else {

    std::cout << "ERROR CHOICE ";
}

std::cout << "\n____________________________________________________________" << "\n";
std::cout << "\n";
//test code (name and Age) + class choice
std::cout << "Name: " << GD1.FirstName << " " << GD1.LastName << "     | " << "Age: " << GD1.Age << "\n";
std::cout << "Class: " << GD1.ClassList[ClassIndex][1]; std::cout << " | " << "Rank : ?" << "\n"; 
std::cout << "\n____________________________________________________________" << "\n";

return GD1;

}

int main() {
    GuildData GD0;

    int i = 0;
    while (i < 6) {

     GD0 = MainDIsplay(); 

    if (GD0.Choice == 1) {
        RegisterationsMenu();
    }

    else if (GD0.Choice == 2) {
        RankWikipediaMenu();  
    }

    else if (GD0.Choice ==3) {
        ContributionTeamMenu();
    }

    else if (GD0.Choice == 4) {
        GuildCalculatorMenu();

    }

    else if (GD0.Choice == 9) {
        std:: cout << "\n";
        std::cout << "|   +  +  +   HAVE A GREAT ADVENTURE!   +  +  +   |" << "\n";
        std::cout << "| THANKS FOR USING OUR GUILD REGISTRATIONS SYSTEM |" << "\n";
        std::cout << "\n";
        std::exit(0);
    }

    i++;

 }
    return 0;
}
