#include "patterns.h"

#include <array>
#include <cassert>
#include <map>
#include <set>
#include <vector>

struct Dot {
public:
    Dot(char token);

    char mToken;
    bool mIsUsed{false};
    std::vector<Dot *> mDirectConnectDots;
    std::map<Dot *, Dot *> mIndirectConnectionDots;
};

std::set<Dot> makeDots()
{
    Dot dotA{'A'};
    Dot dotB{'B'};
    Dot dotC{'C'};
    Dot dotD{'D'};
    Dot dotE{'E'};
    Dot dotF{'F'};
    Dot dotG{'G'};
    Dot dotH{'H'};
    Dot dotI{'I'};

    dotA.mDirectConnectDots.reserve(5);
    dotA.mDirectConnectDots.emplace_back(&dotB);
    dotA.mDirectConnectDots.emplace_back(&dotD);
    dotA.mDirectConnectDots.emplace_back(&dotE);
    dotA.mDirectConnectDots.emplace_back(&dotF);
    dotA.mDirectConnectDots.emplace_back(&dotH);

    dotB.mDirectConnectDots.reserve(7);
    dotB.mDirectConnectDots.emplace_back(&dotA);
    dotB.mDirectConnectDots.emplace_back(&dotC);
    dotB.mDirectConnectDots.emplace_back(&dotD);
    dotB.mDirectConnectDots.emplace_back(&dotE);
    dotB.mDirectConnectDots.emplace_back(&dotF);
    dotB.mDirectConnectDots.emplace_back(&dotG);
    dotB.mDirectConnectDots.emplace_back(&dotI);

    dotC.mDirectConnectDots.reserve(5);
    dotC.mDirectConnectDots.emplace_back(&dotB);
    dotC.mDirectConnectDots.emplace_back(&dotD);
    dotC.mDirectConnectDots.emplace_back(&dotE);
    dotC.mDirectConnectDots.emplace_back(&dotF);
    dotC.mDirectConnectDots.emplace_back(&dotH);

    dotD.mDirectConnectDots.reserve(7);
    dotD.mDirectConnectDots.emplace_back(&dotA);
    dotD.mDirectConnectDots.emplace_back(&dotB);
    dotD.mDirectConnectDots.emplace_back(&dotC);
    dotD.mDirectConnectDots.emplace_back(&dotE);
    dotD.mDirectConnectDots.emplace_back(&dotG);
    dotD.mDirectConnectDots.emplace_back(&dotH);
    dotD.mDirectConnectDots.emplace_back(&dotI);

    dotE.mDirectConnectDots.reserve(8);
    dotE.mDirectConnectDots.emplace_back(&dotA);
    dotE.mDirectConnectDots.emplace_back(&dotB);
    dotE.mDirectConnectDots.emplace_back(&dotC);
    dotE.mDirectConnectDots.emplace_back(&dotD);
    dotE.mDirectConnectDots.emplace_back(&dotF);
    dotE.mDirectConnectDots.emplace_back(&dotG);
    dotE.mDirectConnectDots.emplace_back(&dotH);
    dotE.mDirectConnectDots.emplace_back(&dotI);

    dotF.mDirectConnectDots.reserve(7);
    dotF.mDirectConnectDots.emplace_back(&dotA);
    dotF.mDirectConnectDots.emplace_back(&dotB);
    dotF.mDirectConnectDots.emplace_back(&dotC);
    dotF.mDirectConnectDots.emplace_back(&dotE);
    dotF.mDirectConnectDots.emplace_back(&dotG);
    dotF.mDirectConnectDots.emplace_back(&dotH);
    dotF.mDirectConnectDots.emplace_back(&dotI);

    dotG.mDirectConnectDots.reserve(5);
    dotG.mDirectConnectDots.emplace_back(&dotB);
    dotG.mDirectConnectDots.emplace_back(&dotD);
    dotG.mDirectConnectDots.emplace_back(&dotE);
    dotG.mDirectConnectDots.emplace_back(&dotF);
    dotG.mDirectConnectDots.emplace_back(&dotH);

    dotH.mDirectConnectDots.reserve(7);
    dotH.mDirectConnectDots.emplace_back(&dotA);
    dotH.mDirectConnectDots.emplace_back(&dotC);
    dotH.mDirectConnectDots.emplace_back(&dotD);
    dotH.mDirectConnectDots.emplace_back(&dotE);
    dotH.mDirectConnectDots.emplace_back(&dotF);
    dotH.mDirectConnectDots.emplace_back(&dotG);
    dotH.mDirectConnectDots.emplace_back(&dotI);

    dotI.mDirectConnectDots.reserve(5);
    dotI.mDirectConnectDots.emplace_back(&dotB);
    dotI.mDirectConnectDots.emplace_back(&dotD);
    dotI.mDirectConnectDots.emplace_back(&dotE);
    dotI.mDirectConnectDots.emplace_back(&dotF);
    dotI.mDirectConnectDots.emplace_back(&dotH);

    dotA.mIndirectConnectionDots.insert(&dotB, &dotC);
    dotA.mIndirectConnectionDots.insert(&dotD, &dotG);
    dotA.mIndirectConnectionDots.insert(&dotE, &dotI);

    dotB.mIndirectConnectionDots.insert(&dotE, &dotH);

    dotC.mIndirectConnectionDots.insert(&dotB, &dotA);
    dotC.mIndirectConnectionDots.insert(&dotE, &dotG);
    dotC.mIndirectConnectionDots.insert(&dotF, &dotI);

    dotD.mIndirectConnectionDots.insert(&dotE, &dotF);

    dotF.mIndirectConnectionDots.insert(&dotE, &dotD);

    dotG.mIndirectConnectionDots.insert(&dotD, &dotA);
    dotG.mIndirectConnectionDots.insert(&dotE, &dotC);
    dotG.mIndirectConnectionDots.insert(&dotH, &dotI);

    dotH.mIndirectConnectionDots.insert(&dotE, &dotB);

    dotI.mIndirectConnectionDots.insert(&dotE, &dotA);
    dotI.mIndirectConnectionDots.insert(&dotF, &dotC);
    dotI.mIndirectConnectionDots.insert(&dotH, &dotG);

    return std::set<Dot>{dotA, dotB, dotC, dotD, dotE, dotF, dotG, dotH, dotI};
}

class LockScreen {
public:
private:
    std::array<Dot, 9> mPoints;
};

unsigned int countPatternsFrom(char firstDot, unsigned short length)
{
    assert(firstDot >= 'A' && firstDot <= 'I');

    if (length == 0 || length > 8) {
        return 0;
    }
    return 0;
}
