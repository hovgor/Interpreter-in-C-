#include <iostream>
#include <string>
#include <vector>
//debag
void debag(std::vector<std::string> &str)
{
    for (int cccccc = 0; cccccc < str.size(); ++cccccc)
    {
        std::cout << str[cccccc] << "   ";
    }
    std::cout << "0rd element:    " << str[0] << "   ";
    return;
}

// matematikakan gorcoxutyunner
float add(float x, float y)
{
    return x + y;
}
float sub(float x, float y)
{
    return x - y;
}
float mul(float x, float y)
{
    return x * y;
}
float div(float x, float y)
{
    if (y != 0)
    {
        return x / y;
    }
    throw "error";
}

//tveri convertacia
float convert(std::string myfloat)
{
    //debag
    //std::cout << "bizimdir3\n";
    float tiv = stof(myfloat);
    return tiv;
}
//structuraner
struct tvers
{
    std::string name;
    float tver;
};
struct tarers
{
    std::string name;
    std::string tarer;
};
//stugum popoxakanneri anuner@
std::string tuylatreli(std::string anuns)
{
    for (int qq = 0; qq < anuns.size(); ++qq)
    {
        if (anuns[qq] >= '0' && anuns[qq] <= '9')
        {
            std::cout << "Անունի մեջ օգտագործված է թիվ ֊֊ " << anuns[qq] << std::endl;
            throw "error";
        }
    }
    return anuns;
}

//popoxakanner haytararvac
std::vector<tvers> tveriHamar;
std::vector<tarers> tareriHamar;

void veramshakum(std::vector<std::string> tox1)
{
    for (int i = 0; i < tox1.size(); ++i)
    {
        if (tox1[i] == "ՏՊԻ" && tox1[i + 1] == "(")
        {
            // std::cout << tox1[0] << std::endl;
            for (int tz = 0; tz < tveriHamar.size(); ++tz)
            {
                //debag
                //std::cout << "bizimdir4\n";
                if (tveriHamar[tz].name == tox1[i + 2])
                {
                    std::cout << tveriHamar[tz].tver << std::endl;
                    // tveriHamar.clear();
                    break;
                }
                if (tareriHamar[tz].name == tox1[i + 2])
                {
                    std::cout << tareriHamar[tz].tarer << std::endl;
                    break;
                }
            }
        }

        for (int c = 0; c < tveriHamar.size(); ++c)
        {
            if (tox1[i] == tveriHamar[c].name && tox1[i + 1] == "=")
            {
                float tvik = convert(tox1[i + 2]);
                tveriHamar[c].tver = tvik;
            }
        }
        for (int c = 0; c < tareriHamar.size(); ++c)
        {
            if (tox1[i] == tareriHamar[c].name && tox1[i + 1] == ":")
            {
                tareriHamar[c].tarer = tox1[i + 2];
            }
        }
        if (tox1[i] == "ՓՈՓՈԽԱԿԱՆ" && tox1[i + 2] == "=")
        {
            tveriHamar.push_back({tuylatreli(tox1[i + 1]), convert(tox1[i + 3])});
            //debag
            //std::cout << "bizimdir\n";
        }
        if (tox1[i] == "ՓՈՓՈԽԱԿԱՆ" && tox1[i + 2] == ":")
        {
            tareriHamar.push_back({tuylatreli(tox1[1]), tox1[3]});
            //debag
            // std::cout << "bizimdir2\n";
        }
        //matematika
        if (tox1[i] == "+" && tox1[i - 2] == "=")
        {
            for (int c = 0; c < tveriHamar.size(); ++c)
            {
                if (tox1[i - 3] == tveriHamar[c].name)
                {
                    float tvik = add(convert(tox1[i - 1]), convert(tox1[i + 1]));
                    tveriHamar[c].tver = tvik;
                }
            }
        }
        if (tox1[i] == "֊" && tox1[i - 2] == "=")
        {
            for (int c = 0; c < tveriHamar.size(); ++c)
            {
                if (tox1[i - 3] == tveriHamar[c].name)
                {
                    float tvik = sub(convert(tox1[i - 1]), convert(tox1[i + 1]));
                    tveriHamar[c].tver = tvik;
                }
            }
        }
        if (tox1[i] == "*" && tox1[i - 2] == "=")
        {
            for (int c = 0; c < tveriHamar.size(); ++c)
            {
                if (tox1[i - 3] == tveriHamar[c].name)
                {
                    float tvik = mul(convert(tox1[i - 1]), convert(tox1[i + 1]));
                    tveriHamar[c].tver = tvik;
                }
            }
        }
        if (tox1[i] == "/" && tox1[i - 2] == "=")
        {
            for (int c = 0; c < tveriHamar.size(); ++c)
            {
                if (tox1[i - 3] == tveriHamar[c].name)
                {
                    float tvik = div(convert(tox1[i - 1]), convert(tox1[i + 1]));
                    tveriHamar[c].tver = tvik;
                }
            }
        }
    }
    tox1.clear();
}

//ifi hamar funkcianer stugumner

bool ifimshakich(std::vector<std::string> &pakagceriMijin)
{
    for (int pakagcer = 0; pakagcer < pakagceriMijin.size(); ++pakagcer)
    {
    }
}
//ifnoc
void ifimshakum(std::vector<std::string> toxik)
{
    std::vector<std::string> coxik;

    int caunt = 1;
    while (toxik[caunt] != ")")
    {
        coxik.push_back(toxik[caunt + 1]);
        caunt++;
    }
    for (int sh = 0; sh < coxik.size(); ++sh)
    {
        if (coxik[sh] == "<")
        {
        }
    }

    //debag(coxik);
}

//himnakan funkcia
void himnakan(std::vector<std::string> zangvc)
{
    std::vector<std::string> tox2;
    std::vector<std::string> tox;
    int count = 0;
    for (int xx = 0; xx < zangvc.size(); ++xx)
    {
        if (zangvc[xx] == "ete" && zangvc[xx + 1] == "(")
        {
            for (int xxx = 0; xxx < zangvc.size(); ++xxx)
            {
                tox2.push_back(zangvc[xx]);
                ++xx;
                if (zangvc[xx] == "}")
                {
                    ifimshakum(tox2);
                    break;
                }
            }
        }
        else if (zangvc[xx] != ";")
        {
            tox.push_back(zangvc[xx]);
        }
        else
        {
            veramshakum(tox);

            tox.clear();
        }
    }
}
