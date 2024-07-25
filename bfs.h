#pragma once
#include<map>
#include<set>

class C_BFS
{
private:
    struct S_NODE
    {
        int nId;
        bool bVisit;
        std::set<S_NODE*> setChild;
    };
private:
    std::map<int, S_NODE*> m_mapNode;
private:
    S_NODE* createNode(int nId);
    S_NODE* insertNode(int nId);
public:
    C_BFS()=default;
    bool add(int nDst, int nSrc);
    void print();
    void run(int nId);
};