/**
  ******************************************************************************
  * @file    wine_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Oct  1 15:06:38 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "wine_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_wine_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_wine_weights_array_u64[241] = {
  0xbe94be04be60e5aeU, 0x3ea0b35fbd7bc686U, 0x3d8fb2b8bec7f6d4U, 0xbe8e31603ead1b8eU,
  0xbcbd7934bd8ad404U, 0xbf3b7cc83ed8cbbbU, 0x3dce9cc43f430998U, 0x3db29a083c18c8deU,
  0xbe3424e13d3ede2cU, 0x3ea4e2e83e5c26f1U, 0x3af456633e0afffeU, 0xbe1dfdc0be09f8cfU,
  0xbe1dae34be0689dfU, 0xbf1cd82a3eeb45e8U, 0xbed5c7eb3e69967bU, 0xbcc337ef3e3f07fbU,
  0xbea1a893bedf5815U, 0xbe6b468d3ed855ecU, 0xbce07cd73d7e500dU, 0x3db32351beb160d1U,
  0x3d383a563e25e373U, 0x3c9d20973ebf2127U, 0x3e53e0383e4d8ce6U, 0x3e2748aabdab4ab6U,
  0x3d0bc922be043a4fU, 0x3f224e99bee0d945U, 0xbf275c59bee0094bU, 0x3e01149cbecf9b99U,
  0xbe79f1eb3e0e58fdU, 0xbefa114cbe44670aU, 0x3eb87ba2bd6e8d28U, 0xbe25c5e13c5b9a5cU,
  0x3da22e2ebe011595U, 0x3e4c3a8a3e382fa4U, 0x3e124e46bd1e84efU, 0xbc1338d4be65c7dbU,
  0x3da37b2cbdca84cbU, 0xbc2074a5bd9404b2U, 0x3ddfc1e73da4b6a9U, 0x3e3137703e70f15cU,
  0xbd074e04be46a0a7U, 0xbe323857bf47192eU, 0xbd3844c7be9634c9U, 0xbda272d43ed1f8efU,
  0xbf5682aa3ded77ffU, 0xbe7a2bbb3f722e09U, 0x3e2e7af4be8213f3U, 0x3e436156bec84705U,
  0x3bc0d34c3cda83e6U, 0xbdc6e42a3eace043U, 0xbe4044b0bd546193U, 0xbd2f5b35be268856U,
  0x3e7080c73d7d8f87U, 0x3e5d2d253e86431fU, 0x3be064cf3d829f37U, 0x3ce40d013cbb8fd9U,
  0x3dc5e54a3d9eedcfU, 0xbd7aa5d8be06a686U, 0xbde4d0c9bc092e32U, 0xbe350e2ebd9c7deaU,
  0xbe13c0393dd2d0cbU, 0x3eb6efcf3e5157b0U, 0x3daf0bb33ea18eaeU, 0x3c90a18cbe3ab63aU,
  0xbe141fdcbd91afb4U, 0x3d030ddf3d7c0dbbU, 0xbe835e2cbdd03928U, 0x3e60c2d6bec48aacU,
  0x3da8fffbbe99c69aU, 0x3dc7d7403e4abb40U, 0x3d6e1ef2be8fe523U, 0x3ea2a9a63dacc92eU,
  0x3eb104a63eb5e71cU, 0x3ecd2bbdbf18c574U, 0xbd352fedbdb9c23aU, 0xbecbb0813ea03c4cU,
  0xbc9132293f069f19U, 0xbefb5f823f04ca47U, 0x3e2039443e0fac86U, 0xbe60a84bbd8a4427U,
  0xbe8d0f93be3665a3U, 0x3cab3911be4ecf66U, 0xbdd65b32bd1693feU, 0xbd84d9463e119a61U,
  0x3e82f1c03dedf694U, 0xbe7d8d623da00bb7U, 0x3deb12a9be0c65e9U, 0x3ddd9420be805745U,
  0x3e79a6d5be0d08dcU, 0xbd9f88abbe4df79cU, 0x3e36c5833e439d65U, 0x3eb9f8293e95dc10U,
  0xbf0df0d23e9e0107U, 0xbe7b67383e345dcbU, 0x3e66adef3e19c183U, 0x3eb5e5b23e954ca2U,
  0x3ea0a6473e638789U, 0x3e70b76cbecd7153U, 0x3e42baf0bf010075U, 0x3e0365673e1ca149U,
  0x3eb058bdbd874ccfU, 0xbeb6ece63dd67d0eU, 0xbe808a1ebe900e10U, 0x3f12b97dbe7b19ecU,
  0xbdc7b4963e8945aaU, 0xbdacc0eabcf62856U, 0x3e413bc53ccfd92cU, 0xbd85adcabdb047d2U,
  0xbe32f4a43e354838U, 0x3bb31890be235ca0U, 0x3e8ca5bc3d121c62U, 0x3d8b9bab3e471183U,
  0x3e97817b3e885330U, 0x3d88d266bd1317beU, 0x3dfdbe593cc1791aU, 0x3dd2b4843d149287U,
  0xbe3e491fbe8091ccU, 0xbdd19f093e9903b4U, 0xbee3ae963cf9c01aU, 0xbe78535a3c48c0abU,
  0xbe46f1993dfd7410U, 0x3e908d523eea3e4bU, 0x3e6c1592be58e79cU, 0xbdf84ac2be60983fU,
  0xbe413df73eb51db5U, 0x3eccde063e94584dU, 0x3e1b280f3e936c02U, 0x3d82d2bebdce2abfU,
  0xbe8a225f3e8088f7U, 0xbda6ab51be29b817U, 0x3e9c84b3be6126e0U, 0x3ea7a180bede2278U,
  0x3e0931d73e3f51edU, 0x3e9b80993e50a29fU, 0xbe5058523e993c6bU, 0xbdcc883ebeca99b2U,
  0x3e3e68aabe41b985U, 0xbd5fed323dcfcbebU, 0x3e98ed043dce5bfcU, 0xbe74101abdacded2U,
  0x3e10c2a1be611e75U, 0xbe3e970c3e5f558bU, 0x3d656e20bdab3cd9U, 0x3e95ea3a3ea0b178U,
  0xbdd6dbf53e59156bU, 0xbd5464013e54bf5cU, 0xbe20953d3cb665d4U, 0xbdd0d8fe3e8f424eU,
  0xbd22f4b9be3964a4U, 0x3e9f834b3cb55f52U, 0xbe6285f2bdbe62c5U, 0x3ea93166be313291U,
  0xbe2f5ed6be82ff52U, 0x3e8911a0be7cf8e3U, 0x3e4b41f9be52cecfU, 0x3ecb739f3e87a1faU,
  0xbe3ba1d4be87831bU, 0xbd4e9cddbd3b4f6aU, 0xbe3931743e089b7cU, 0x3e0550d23e0b45acU,
  0x3e4bc020bdf62331U, 0x3e9896e83bfafaaaU, 0x3e8ce6423e72a90aU, 0xbee701783eac9b27U,
  0xbe64820bbee612a1U, 0xbe84eb36be8e4e66U, 0xbdd3b058be28905fU, 0x3e69ca15be7b74ddU,
  0xbe35b71c3e25fc89U, 0xbe936a713d28b46dU, 0x3ed8bdcebe496e65U, 0x3e3835d93e2acebaU,
  0xbe32613e3e7a4677U, 0x3e2947b43d7d36b3U, 0xbf1a30a3be77a532U, 0xbe4d3e653f276882U,
  0x3d9f3a793df5a87dU, 0xbe884e343e326cf5U, 0xbea6364a3ccef319U, 0xbe0eb8aebd6eb9a6U,
  0xbdcf0bd8be1e6a1dU, 0xbe276722be8f45aaU, 0xbe33b2963e50f30aU, 0xbd9c5df23e60cc79U,
  0x392d9022be2ede0aU, 0xbea253f33dd40a40U, 0x3e3e0890be6db3bcU, 0x3e20b783be99d78eU,
  0xbeb96e77bdff8984U, 0x3ebc88b53e37ab7aU, 0xbee512ccbe9283efU, 0x3eb66ae93e5dfb78U,
  0xbe8c9ca9bf0c68e6U, 0x3e2d851cbb1c6489U, 0x3f1c16093c1a0ac9U, 0xbe675f7e3e31ccdfU,
  0x3efb39093ea36bb2U, 0xbe3db7353da81f65U, 0xbba424c8be1e5635U, 0xbe9348bfbec39283U,
  0xbf6f580f3e89ead2U, 0x3e3385ff3f047c0aU, 0xbe3ba8a63d4ed7abU, 0x3e8b23843e835af6U,
  0x3defd37ebe1b4abdU, 0x3db3c2d13e097c00U, 0x3d5553f2bd44f3a1U, 0xbe3a6b9cbdbe251bU,
  0xbe226c833ed9b9c2U, 0x3ec4f9513eea8940U, 0xbdf172493ebd8bddU, 0xbd91e05f3f063127U,
  0xbe18ebc0be0acd5cU, 0x3f1121f73d953bd1U, 0xbe0fc1a5be1fc569U, 0x3eb507113ead6226U,
  0xbe368601bdcc23b3U, 0xbe1a95b43ea7a9e0U, 0xbe4137703eabd1f6U, 0xbe0cde34be423aadU,
  0x3eabea1ebe348c99U, 0xbd75abc43ec5774dU, 0x3e9acc78be41731aU, 0xbe38f5e93f12a852U,
  0xbec24d313e97ebe4U, 0x3f1a9a5d3ead6036U, 0xbd3c76243f228bf6U, 0x3cbf987d3eb5c494U,
  0xbe4a8e6ebe27c4bcU, 0x3e6cb5253d6cf376U, 0xbd93741dbe1218aeU, 0x3f00664e3f0b56e5U,
  0xbe11c13ebc07251eU, 0xbe2aa3713f213b61U, 0xbe92e9443ed1af16U, 0xbd98cc65be72add9U,
  0x3eefb1a3be29f0bdU, 0x3c945a3b3f374dd3U, 0x3f1301afbe610461U, 0xbe5c55a13ea2676dU,
  0x3e861084U,
};


ai_handle g_wine_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_wine_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

