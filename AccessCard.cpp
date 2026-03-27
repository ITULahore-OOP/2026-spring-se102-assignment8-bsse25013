#include "AccessCard.h"

// Constructor
AccessCard::AccessCard(string cardID, int accessLevel) {
    this->cardID = cardID;
    this->accessLevel = accessLevel;
}
// Getter
string AccessCard::getCardID() {
    return cardID;
}
// Getter
int AccessCard::getAccessLevel() {
    return accessLevel;
}
// Display function
void AccessCard::displayCardInfo() {
    cout << "Card ID: " << cardID 
         << "Access Level: " << accessLevel << endl;
}