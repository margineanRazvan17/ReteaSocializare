#include <iostream>
#include "test.h"
#include "UserInterface.h"
#include "prietenieService.h"

using namespace std;

int main() {
    test();

    Utilizator u1, u2, u3, u4, u6, u7, u8, u9, u10, u11, u12, u13, u14, u15, u5;
    u1.setName("razvan");
    u1.setPassword("abc123");

    u2.setName("bogdan");
    u2.setPassword("abc1233");

    u3.setName("cristi");
    u3.setPassword("abc1223");

    u4.setName("victor");
    u4.setPassword("abc11123");

    u5.setName("sergiu");
    u5.setPassword("abc11223");

    u6.setName("razvanM");
    u6.setPassword("abc123");

    u7.setName("razvanD");
    u7.setPassword("abc123");

    u8.setName("razvanU");
    u8.setPassword("abc123");

    u9.setName("Messi");
    u9.setPassword("abc123");

    u10.setName("razvanN");
    u10.setPassword("abc123");

    u11.setName("Luci123");
    u11.setPassword("abc123");

    u11.setName("Lucas12");
    u11.setPassword("abc123");

    u12.setName("Lucasen");
    u12.setPassword("abc123");

    u12.setName("Ingrid");
    u12.setPassword("abc123");

    u13.setName("Georgeana");
    u13.setPassword("abc123");

    u14.setName("Roxana");
    u14.setPassword("abc123");

    u15.setName("Vichi");
    u15.setPassword("abc123");



    RepoUser repoUser;
    UtilizatorService serviceUser(repoUser);
    serviceUser.addUtilizator(u1.getName(), u1.getPassword());
    serviceUser.addUtilizator(u2.getName(), u2.getPassword());
    serviceUser.addUtilizator(u3.getName(), u3.getPassword());
    serviceUser.addUtilizator(u4.getName(), u4.getPassword());
    serviceUser.addUtilizator(u5.getName(), u5.getPassword());
    serviceUser.addUtilizator(u6.getName(), u6.getPassword());
    serviceUser.addUtilizator(u7.getName(), u7.getPassword());
    serviceUser.addUtilizator(u8.getName(), u8.getPassword());
    serviceUser.addUtilizator(u9.getName(), u9.getPassword());
    serviceUser.addUtilizator(u10.getName(), u10.getPassword());
    serviceUser.addUtilizator(u11.getName(), u11.getPassword());
    serviceUser.addUtilizator(u12.getName(), u12.getPassword());
    serviceUser.addUtilizator(u13.getName(), u13.getPassword());
    serviceUser.addUtilizator(u14.getName(), u14.getPassword());
    serviceUser.addUtilizator(u15.getName(), u15.getPassword());

    PrietenieRepository repoPrietenie;
    PrietenieService prietenieService(repoPrietenie);

    MesajRepository mr;
    MesajService ms(mr);

    ui console(serviceUser,prietenieService, ms);
    console.runMenu();

    return 0;
}
