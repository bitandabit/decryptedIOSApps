//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSSet, NSString, SCSponsoredSlug, SOJUUnlockableTrackInfo, SOJUUnlockablesAttachment;

@protocol SCLens <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *lensCreatorUserId;
@property(readonly, copy, nonatomic) NSString *scannedData;
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) _Bool isRanked;
@property(readonly, copy, nonatomic) SOJUUnlockablesAttachment *unlockablesAttachment;
@property(readonly, copy, nonatomic) NSString *onDemandTemplateId;
@property(readonly, nonatomic) _Bool hasContextCards;
@property(readonly, copy, nonatomic) NSSet *applicableContexts;
@property(readonly, copy, nonatomic) NSSet *cameraContexts;
@property(readonly, copy, nonatomic) NSString *lensAttributionName;
@property(readonly, copy, nonatomic) NSString *lensCreatorUsername;
@property(readonly, copy, nonatomic) NSString *unlockCompanionBackReferenceId;
@property(readonly, copy, nonatomic) NSString *encryptedGeoData;
@property(readonly, nonatomic) unsigned long long activationCameraPosition;
@property(readonly, nonatomic) _Bool isStudioPreview;
@property(readonly, nonatomic) _Bool isThirdParty;
@property(readonly, copy, nonatomic) NSArray *manifest;
@property(readonly, copy, nonatomic) SOJUUnlockableTrackInfo *unlockableTrackInfo;
@property(readonly, nonatomic) long long absoluteCarouselPosition;
@property(readonly, copy, nonatomic) NSDate *demoStartDate;
@property(readonly, nonatomic) _Bool isDemo;
@property(readonly, copy, nonatomic) NSArray *scheduleIntervals;
@property(readonly, copy, nonatomic) SCSponsoredSlug *sponsoredSlug;
@property(readonly, nonatomic) _Bool isSponsored;
@property(readonly, nonatomic) _Bool isFeatured;
@property(readonly, copy, nonatomic) NSArray *categoriesData;
@property(readonly, copy, nonatomic) NSArray *categories;
@property(readonly, nonatomic) long long section;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, copy, nonatomic) NSString *signature;
@property(readonly, copy, nonatomic) NSString *bitmojiComicId;
@property(readonly, copy, nonatomic) NSString *filterOverlayImageURL;
@property(readonly, copy, nonatomic) NSString *iconURL;
@property(readonly, copy, nonatomic) NSString *contentURL;
@property(readonly, copy, nonatomic) NSDictionary *hintTranslations;
@property(readonly, copy, nonatomic) NSString *hintId;
@property(readonly, copy, nonatomic) NSString *code;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *lensId;
@end
