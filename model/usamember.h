#ifndef USAMEMBER_H
#define USAMEMBER_H

#include <iostream>
#include <list>

#include "usastatus.h"

//TODO: A voir si on ajoute le numéro de license non obligatoire pour un membre ou si on le met dans gymnaste et coach

/**
 * @brief The UsaMember class
 * This class represent a member of the USA Association (gymnast, coach, president ...)
 */
class UsaMember
{
public:

    UsaMember();
    UsaMember(std::string name, std::string firstName, char sex, time_t birthDate, std::string address, int postalCode, std::string city, std::string mail, time_t registrationDate, std::list<UsaStatus *> status, std::string medicalSet, std::string comment);
    ~UsaMember();


private:

    std::string idMember_; /**< Member's login */
    std::string name_; /**< Member's name */
    std::string firstName_; /**< Member's firstname */
    char sex_;
    time_t birthDate_;
    std::string address_;
    int postalCode_;
    std::string city_;
    std::string mail_;
    time_t registrationDate_;
    std::list<UsaStatus *> status_; /**< Member's status: if is gymnast, coach ...*/
    std::string medicalSet_;
    std::string comment_;

};

#endif // USAMEMBER_H
