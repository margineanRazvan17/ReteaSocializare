//
// Created by Razvan on 28/05/2022.
//
#include<iostream>
#include <assert.h>
#include "test.h"
#include "utilizatorRepository.h"
#include "Array.h"

void testUtilizator(){
Utilizator u1;
Utilizator u2;
u1.setName("razvan");
u1.setPassword("abcd1");
u2.setName("andrei");
u2.setPassword("abcd2");
assert(u1.getName() == "razvan");
assert(u1.getPassword() == "abcd1");

Array<Utilizator> Au;
Au.AddItem(u1);
Au.AddItem(u2);
assert(Au.size() == 2);
Au.remove(u1);
assert(Au.size() == 1);
Au.remove(u2);
assert(Au.size() == 0);

RepoUser repoUser;
repoUser.addUser(u1);
repoUser.addUser(u2);
assert(repoUser.size() == 2);
repoUser.removeUser(u1);
assert(repoUser.size() == 1);




}




void test(){
testUtilizator();
}