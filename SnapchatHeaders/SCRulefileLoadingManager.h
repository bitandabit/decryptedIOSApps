//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCTimeProfilable-Protocol.h"

@class JSContext, NSMutableDictionary, NSString, SCQueuePerformer, SCRulefile;

@interface SCRulefileLoadingManager : NSObject <SCTimeProfilable>
{
    SCRulefile *_validatedRulefile;
    NSString *_version;
    unsigned long long _rulefileErrorReason;
    NSString *_ruleFilePath;
    NSMutableDictionary *_requestKeyToEncodingResult;
    SCQueuePerformer *_encodingStringCachePerformer;
    NSString *_rulefileIdFromOverride;
    id _javascriptFunctionStory;
    id _javascriptFunctionDirectStorageOptions;
    id _javascriptFunctionStoryStatusCodeRemapping;
    id _javascriptFunctionDiscover;
    JSContext *_context;
}

+ (int)context;
+ (id)shared;
@property(retain) JSContext *context; // @synthesize context=_context;
@property(retain) id javascriptFunctionDiscover; // @synthesize javascriptFunctionDiscover=_javascriptFunctionDiscover;
@property(retain) id javascriptFunctionStoryStatusCodeRemapping; // @synthesize javascriptFunctionStoryStatusCodeRemapping=_javascriptFunctionStoryStatusCodeRemapping;
@property(retain) id javascriptFunctionDirectStorageOptions; // @synthesize javascriptFunctionDirectStorageOptions=_javascriptFunctionDirectStorageOptions;
@property(retain) id javascriptFunctionStory; // @synthesize javascriptFunctionStory=_javascriptFunctionStory;
@property(copy, nonatomic) NSString *rulefileIdFromOverride; // @synthesize rulefileIdFromOverride=_rulefileIdFromOverride;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ruleFilePath;
- (id)_sha1Digest:(id)arg1;
- (id)_currentReachabilityString;
- (id)_errorReasonStringFromEnum:(unsigned long long)arg1;
- (id)circumstanceDebugInfoWithLineBreak:(_Bool)arg1;
- (id)rulefileDebugInfoIncludeJS:(_Bool)arg1 lineBreak:(_Bool)arg2;
- (void)getEncodingResultWithRequestKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveEncodingResult:(id)arg1 requestKey:(id)arg2 isStory:(_Bool)arg3;
- (id)encodingForDsnapWithRequestKey:(id)arg1;
- (long long)remapErrorStatusCodeForStory:(id)arg1 request:(id)arg2 response:(id)arg3;
- (id)_directStorageOptionsForStory:(id)arg1;
- (id)directStorageOptionsForStory:(id)arg1;
- (id)_encodingForStory:(id)arg1;
- (id)encodingForStory:(id)arg1 useFallback:(_Bool)arg2;
- (id)_getStoryType:(id)arg1;
- (id)_circumstanceWithStory:(id)arg1;
- (_Bool)_isRulefileExpired:(id)arg1;
- (_Bool)_validateRulefileSignature:(id)arg1;
- (void)_loadValidatedRulefile:(id)arg1;
- (void)_updateRuleFile:(id)arg1 saveToDisk:(_Bool)arg2;
- (void)updateRuleFile:(id)arg1 saveToDisk:(_Bool)arg2 updateInBackground:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
