// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "assert.h"

#include "chainparams.h"
#include "main.h"
#include "util.h"

#include <boost/assign/list_of.hpp>

using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

//
// Main network
//

// Convert the pnSeeds6 array into usable address objects.
static void convertSeed6(std::vector<CAddress> &vSeedsOut, const SeedSpec6 *data, unsigned int count)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7*24*60*60;
    for (unsigned int i = 0; i < count; i++)
    {
        struct in6_addr ip;
        memcpy(&ip, data[i].addr, sizeof(ip));
        CAddress addr(CService(ip, data[i].port));
        addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

class CMainParams : public CChainParams {
public:
    CMainParams() {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0xb3;
        pchMessageStart[1] = 0x5c;
        pchMessageStart[2] = 0xd7;
        pchMessageStart[3] = 0xd2;
        vAlertPubKey = ParseHex("047f053169e2f161bdb9cd0cf68b3bd024aedc266d65d756850f6ec692b7dd1f5329160204f3d3068e8dbc8ea6703a5d9d6a361ec59d7d7a7b474301c0de3d6745");
        nDefaultPort = 43210;
        nRPCPort = 43211;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 20);

        // Build the genesis block. Note that the output of the genesis coinbase cannot
        // be spent as it did not originally exist in the database.
        //
        // CBlock(hashBestChain=29d23d16f172fc92759cd3a2931f9023cbf416baff1031d6f664c0a454cc2a60  height=0  trust=1048577  date=12/03/17 18:57:16)
        //  Coinbase(hash=12630d16a9, nTime=1393221600, ver=1, vin.size=1, vout.size=1, nLockTime=0)
        //    CTxIn(COutPoint(0000000000, 4294967295), coinbase 00012a24323020466562203230313420426974636f696e2041544d7320636f6d6520746f20555341)
        //    CTxOut(empty)
        //  vMerkleTree: 12630d16a9
        const char *pszTimestamp = "i'm alfonz king of ducks - 13/Mar/2018.";
        std::vector<CTxIn> vin;
        vin.resize(1);
        vin[0].scriptSig = CScript() << 0 << CBigNum(42) << vector<unsigned char>((const unsigned char *)pszTimestamp, (const unsigned char *)pszTimestamp + strlen(pszTimestamp));
        std::vector<CTxOut> vout;
        vout.resize(1);
        vout[0].SetEmpty();
        CTransaction txNew(1, 1496692022, vin, vout, 0);
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime = 1520920328;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 936369;

        hashGenesisBlock = genesis.GetHash();
         printf("genesis.GetHash = %s\n", genesis.GetHash().ToString().c_str());
         printf("merkle = %s\n", genesis.hashMerkleRoot.ToString().c_str());

        assert(hashGenesisBlock == uint256("0x165dc17d99812739541c37a2f38ce1e7934336eff4ed17af9c921c5a63a2cb12"));
        assert(genesis.hashMerkleRoot == uint256("0x9f9d5e5294898bd754c4f54853356dface725d4e58f5b9b02561d20140c83fb9"));

        vSeeds.push_back(CDNSSeedData("n0", "139.99.105.67:43210"));


        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 51);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 5);
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 165);
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x04)(0x88)(0xB2)(0x1E).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x88)(0xAD)(0xE4).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_main, ARRAYLEN(pnSeed6_main));

        nLastPOWBlock = 100000;
    }

    virtual const CBlock &GenesisBlock() const { return genesis; }
    virtual Network NetworkID() const { return CChainParams::MAIN; }

    virtual const vector<CAddress> &FixedSeeds() const
    {
        return vFixedSeeds;
    }

  protected:
    CBlock genesis;
    vector<CAddress> vFixedSeeds;
};
static CMainParams mainParams;

//
// Testnet
//

class CTestNetParams : public CMainParams
{
  public:
    CTestNetParams()
    {
        // The message start string is designed to be unlikely to occur in normal data.
        // The characters are rarely used upper ASCII, not valid as UTF-8, and produce
        // a large 4-byte int at any alignment.
        pchMessageStart[0] = 0x57;
        pchMessageStart[1] = 0x2c;
        pchMessageStart[2] = 0xc4;
        pchMessageStart[3] = 0xa2;
        bnProofOfWorkLimit = CBigNum(~uint256(0) >> 16);
        vAlertPubKey = ParseHex("047f053169e2f161bdb9cd0cf68b3bd024aedc266d65d756850f6ec692b7dd1f5329160204f3d3068e8dbc8ea6703a5d9d6a361ec59d7d7a7b474301c0de3d6745");
        nDefaultPort = 3242;
        nRPCPort = 3243;
        strDataDir = "testnet";

        // Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nBits = 0x1e0fffff; //504365055 Decimal Number
        genesis.nTime = 1520920262;
        genesis.nNonce = 2216093;

        //    assert(hashGenesisBlock == uint256("0x9acac6c7390427d4c6d658f4b9b520cb8c23977722783172bed3262b7a233cec));

        vFixedSeeds.clear();
        vSeeds.clear();

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 51);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 192);
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 239);
        base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x04)(0x35)(0x87)(0xCF).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = list_of(0x04)(0x35)(0x83)(0x94).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));

        nLastPOWBlock = 0x7fffffff;
    }
    virtual Network NetworkID() const { return CChainParams::TESTNET; }
};
static CTestNetParams testNetParams;

static CChainParams *pCurrentParams = &mainParams;

const CChainParams &Params()
{
    return *pCurrentParams;
}

void SelectParams(CChainParams::Network network)
{
    switch (network)
    {
    case CChainParams::MAIN:
        pCurrentParams = &mainParams;
        break;
    case CChainParams::TESTNET:
        pCurrentParams = &testNetParams;
        break;
    default:
        assert(false && "Unimplemented network");
        return;
    }
}

bool SelectParamsFromCommandLine()
{

    bool fTestNet = GetBoolArg("-testnet", false);

    if (fTestNet)
    {
        SelectParams(CChainParams::TESTNET);
    }
    else
    {
        SelectParams(CChainParams::MAIN);
    }
    return true;
}
