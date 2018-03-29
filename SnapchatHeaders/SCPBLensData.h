//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SCPBLensData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *activationCamera; // @dynamic activationCamera;
@property(retain, nonatomic) NSMutableArray *assetManifestArray; // @dynamic assetManifestArray;
@property(readonly, nonatomic) unsigned long long assetManifestArray_Count; // @dynamic assetManifestArray_Count;
@property(copy, nonatomic) NSString *bitmojiComicId; // @dynamic bitmojiComicId;
@property(copy, nonatomic) NSString *code; // @dynamic code;
@property(copy, nonatomic) NSString *configPath; // @dynamic configPath;
@property(nonatomic) long long demoStartDate; // @dynamic demoStartDate;
@property(copy, nonatomic) NSString *filterImageLink; // @dynamic filterImageLink;
@property(nonatomic) _Bool hideUntilAssetsDownloaded; // @dynamic hideUntilAssetsDownloaded;
@property(copy, nonatomic) NSString *hintId; // @dynamic hintId;
@property(retain, nonatomic) NSMutableDictionary *hintTranslations; // @dynamic hintTranslations;
@property(readonly, nonatomic) unsigned long long hintTranslations_Count; // @dynamic hintTranslations_Count;
@property(copy, nonatomic) NSString *iconLink; // @dynamic iconLink;
@property(nonatomic) _Bool isDisabledForVideoChat; // @dynamic isDisabledForVideoChat;
@property(nonatomic) _Bool isStudioPreview; // @dynamic isStudioPreview;
@property(nonatomic) _Bool isThirdParty; // @dynamic isThirdParty;
@property(copy, nonatomic) NSString *lensAttributionName; // @dynamic lensAttributionName;
@property(copy, nonatomic) NSString *lensCreatorUserId; // @dynamic lensCreatorUserId;
@property(copy, nonatomic) NSString *lensCreatorUsername; // @dynamic lensCreatorUsername;
@property(retain, nonatomic) NSMutableArray *lensDescriptorsArray; // @dynamic lensDescriptorsArray;
@property(readonly, nonatomic) unsigned long long lensDescriptorsArray_Count; // @dynamic lensDescriptorsArray_Count;
@property(copy, nonatomic) NSString *lensLink; // @dynamic lensLink;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *signature; // @dynamic signature;
@property(copy, nonatomic) NSString *snappableReplyType; // @dynamic snappableReplyType;
@property(copy, nonatomic) NSString *unlockCompanionBackReferenceId; // @dynamic unlockCompanionBackReferenceId;

@end
