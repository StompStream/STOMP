// Copyright (c) 2018 The STOMP developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef STOMP_ACCUMULATORCHECKPOINTS_JSON_H
#define STOMP_ACCUMULATORCHECKPOINTS_JSON_H

#include <string>
std::string GetMainCheckpoints() {
    std::string strMainCheckpoints = "[\n"
            "  {\n"
                                     "    \"height\": 0,\n"
                                     "    \"1\": \"3c1\",\n"
                                     "    \"5\": \"3c1\",\n"
                                     "    \"10\": \"3c1\",\n"
                                     "    \"50\": \"3c1\",\n"
                                     "    \"100\": \"3c1\",\n"
                                     "    \"500\": \"3c1\",\n"
                                     "    \"1000\": \"3c1\",\n"
                                     "    \"5000\": \"3c1\"\n"
            "  },\n"
            "  {\n"
                                     "    \"height\": 140,\n"
                                     "    \"1\": \"9b40d283bc390f404dae998dd20cdfde108cefa4592c3af2dfd297e5b4a3e1daebe41c59aabf75b8480c97c19b5367d7dd2ed2d0c7813af4b738282eb146ea30e7d934f8ac22870fcf739cdb8df9a1462a6c5a5d611cdfa2031e36e546d53d0b175b71acdf6882fe5bb0d6a852af19e3ccb631f25a7e405aaa3da12afb49969923ae222ba0025ba5d2e9aa78ec0763a5290c315cd162c7ea6af1e0478acd70b0057da074a9b377cc61f4fec1cacee8990606c039f876643105797cf55f9b726f8e8254932d550ad81ef243c938b31a05cc0a82c9e348daf531bf2fd11346d7ad843df3434e59331a740336f66d29e7c88f8e06239a08b3c55c3d696f05939d84\",\n"
                                     "    \"5\": \"4d3c1d763396438729e4ae9c57006393a9acfb98b51d88832215e062e31debee670da33c0135325a9451dde43763ed6415fd1a469770279ac9d50bfb008d7235db169042c69222cb51b31ac38d76dff4b43176b402594a85fce65fbef7a8e0ae2123533f7849303704b9fae8e03ebd802eaf134dcf4cb4047a97053e9ad06709dfdedd2a2b13c9a60c2b2a7ea87abe788e9262344856e4756d36f6daea845c721ded36f70d734db54a0a37404b225e5813800367f34b778a3b1e31ace020c7d913a8967c5df65ced50901882af9dda5cab9252f9c5be9800b27765edc4bcdbdeb0f0ca86317c73659980549af1316573e09d07b80a5d726ed287ba3c346039c4\",\n"
                                     "    \"10\": \"6d914b774fa53fae96f3589ed1496de24692a64726d5a0b11578f5af796ac6302e1648ce3235b6125509c4e9d6d8bacc5bdac7a2588a33d4844900f09c064b53038f3fabdbbe56e3792f1725d3f3dde12b6ed15c345ee5e5f89c8ce7f4a3d368141e9757891b242905f47d79049a365eb518e53aeed229acf69045df67d32778143d45562eb23dd94b62f46c06eb210df9d31c51ce16bf9f204d3ec97e495f4f30e8b734f49642ca714a6db76f54e81fc0b0220556b3c7e39b4013b2e62754df5a228b87230040cab3585ec8e9f520557f02963f079bb5f31f9c62119e43ddd18d7068e845a3d3543ad245a11dc77fa9df65e4b1b165b9ca9d74c8ef4523f332\",\n"
                                     "    \"50\": \"5101b1f0d130b920cd36d11d4e8bf8dbee1ceb29a15c19639beec047d15f4810d5171c245b99e3108fd0f64365461cf01975af1b82e42c3e05ec71ec9eb7ed2186faf65ad36256247787de5f67602e644088c5a52827f6f409b75fd341d0fec06744c70d32ad636610145692ab27db3e159fe32363c982a9230b1f67c529f9cbf8a4d5a4440e58ea39f333d154c4f5c44cf406ecd7a875ec5d2969526ff3123e8ac5bf88d9b24cba950a6f584ada73803a668230aadf4930fbf1f943ae5c651e394d48db4bf8eae204d7023f2280a51cfdc9ac6cfcc7a3df72efb943fa39a76c23e89c03ae56ce9bfd6ad75874a324dfe8fd6abe77bdf79888f122e1dbd4713b\",\n"
                                     "    \"100\": \"46caf2b00d09b19176b32b8e08a10482b47df0f9b35f393821b024375a55993d26459125f85a91010f33a3c699f55bf0f25e3ab98c6716822bdc4f75a16e024eb5fde91dbc622ef4edd15c41754ba8eba6924be5831862e66fa5d0ec7c08178c0b16d552c28c156855a0fe6ba3a70fa2f89a4e6cf0056974453b7ce5ea53c78d678e91c148310efd2bafd073061eb07667a8f06b5f161075925bf5d1a546689725a31f474c1ee887398399713a1fff25808ea6c23abe70044e5b771237771d9154c2af7e7e4fb8887c4d7aa558a3ab078afdc5c0d9cc4a75077814998222cfb42a3e83b96540a99c96bcf5d82e70d7eb79e0887550ff19f66d0fe259875f8136\",\n"
                                     "    \"500\": \"b9b9ea5e6ed2f36ad1cd83338d290dcf7272950a0ed442581a2e1500abd699cade24e6bd246fc730e5c6ee7ae9dc303a29512955e14ffe5717615e95f84027f168d901d49e802f90c802e55af2d0a05e38d698a91944fde21eaa0f50ae2f0edf37be50381d1f2d31736602f41783e72e3ca63df28ec7ffc690b128cfc24e4f04c3313c53721c540774c0ba594df22c9e5f16bbae97c0b69064b7ba14fcded7df8552645d58e59f198b32946d06ed9d3df7d83632a565c30e313b73833261ce056d2a16f24e9c305e016a5c9627daf1894a65dba0d6875f717cc2634f16c463a1f14bd17a7e2c4d2b131ecfa4b9764090317d3e249639d447a5b69df5aa8a6470\",\n"
                                     "    \"1000\": \"3c1\",\n"
                                     "    \"5000\": \"3c1\"\n"
            "  }\n"
            "]";
    return strMainCheckpoints;
}

std::string GetTestCheckpoints() {
    std::string strTestCheckpoints = "[\n"
            "  {\n"
                                     "    \"height\": 0,\n"
                                     "    \"1\": \"0\",\n"
                                     "    \"5\": \"0\",\n"
                                     "    \"10\": \"0\",\n"
                                     "    \"50\": \"0\",\n"
                                     "    \"100\": \"0\",\n"
                                     "    \"500\": \"0\",\n"
                                     "    \"1000\": \"0\",\n"
                                     "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strTestCheckpoints;
}

std::string GetRegTestCheckpoints() {
    std::string strRegTestCheckpoints = "[\n"
            "  {\n"
            "    \"height\": 0,\n"
            "    \"1\": \"0\",\n"
            "    \"5\": \"0\",\n"
            "    \"10\": \"0\",\n"
            "    \"50\": \"0\",\n"
            "    \"100\": \"0\",\n"
            "    \"500\": \"0\",\n"
            "    \"1000\": \"0\",\n"
            "    \"5000\": \"0\"\n"
            "  }\n"
            "]";
    return strRegTestCheckpoints;
}

#endif //STOMP_ACCUMULATORCHECKPOINTS_JSON_H
