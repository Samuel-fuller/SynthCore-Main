// -----------------------------------------------------------------------------
//    ASPiK Plugin Kernel File:  plugindescription.h
//
/**
    \file   plugindescription.h
    \author Will Pirkle
    \date   17-September-2018
    \brief  plugin description strings, codes, unique identifiers and
    		unique cocoa view names
    		- http://www.aspikplugins.com
    		- http://www.willpirkle.com
*/
// -----------------------------------------------------------------------------
#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- STEP 1 for all plugins: change these variables accordingly

// --- FOR AU PLUGINS ONLY ------------------------------------------------- //
//     try to make this as unique as possible (Cocoa has a flat namespace)
//     here I'm appending the VST3 FUID string (unique but must be generated for each plugin)
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_22A3420B45A74B41BD61B1C0B970B6AC
#define AU_COCOA_VIEW_NAME AUCocoaView_22A3420B45A74B41BD61B1C0B970B6AC

// --- MacOS Bundle Identifiers
//     NOTE: these ID strings must EXACTLY MATCH the PRODUCT_BUNDLE_IDENTIFIER setting in Build Settings for the Plugin Target
const char* kAAXBundleID = "fullersound.aax.SynthCoreMain.bundleID";
const char* kVST3BundleID = "fullersound.vst3.SynthCoreMain.bundleID";

// --- For AU: make sure BOTH the Plugin Target and the CocoaUI Target PRODUCT_BUNDLE_IDENTIFIER settings match these strings
const char* kAUBundleID = "fullersound.au.SynthCoreMain.bundleID";

// --- plugin NAME
/* AU only: this MUST EXACLTY match the Product Name in Build Settings for BOTH the CocoaUI and your Plugin Targets! */
const char* kPluginName = "SynthCore Main";     // 31 chars max for AAX
const char* kShortPluginName = "SynthCore Main";    // 15 chars max for AAX
const char* kAUBundleName = "SynthCore Main";

// --- type of plugin
const pluginType kPluginType = pluginType::kSynthPlugin;

// --- vendor info
const char* kVendorName = "Fuller Sound";
const char* kVendorURL = "www.facebook.com/fullerproductions";
const char* kVendorEmail = "samuel.fuller9864@gmail.com";

// --- VST3 & AAX only
const int32_t kFourCharCode = 'FULM'; /// must be unique for each plugin in your company

// --- VST3 specific, see www.willpirkle.com/forum/ for information on generating FUIDs
//     use GUIDGEN.exe from compiler/tools (Win) or UUID Generator (free Mac App)
const char* kVSTFUID = "{22A3420B-45A7-4B41-BD61-B1C0B970B6AC}"; /// NOTE: you need the enclosing { }

// --- AAX specific
const int32_t kManufacturerID = 'FULM';
const int32_t kAAXProductID = 'FULM';

// --- Plugin Options
const bool kWantSidechain = true;
const uint32_t kLatencyInSamples = 0;
const double kTailTimeMsec = 0.000;
const bool kVSTInfiniteTail = false;
const bool kVSTSAA = false;
const uint32_t kVST3SAAGranularity = 1;
const uint32_t kAAXCategory = 0;

#endif

