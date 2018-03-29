//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUDiscoverChannelResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUBroadcastArticleMetadataList, SOJUSponsoredSlugPosAndText;

@interface SOJUDiscoverChannelResponse : NSObject <SOJUDiscoverChannelResponse>
{
    NSString *_name;
    NSNumber *_position;
    NSNumber *_storiesPagePosition;
    NSNumber *_promotedStoriesPagePosition;
    NSString *_publisherName;
    NSString *_publisherFormalName;
    NSString *_publisherDescription;
    NSString *_publisherDeeplink;
    NSString *_filledIcon;
    NSString *_invertedIcon;
    NSString *_loadingIcon;
    NSString *_introMovie;
    NSString *_primaryColor;
    NSString *_secondaryColor;
    NSNumber *_editionId;
    NSString *_editionPublishingTimestamp;
    NSArray *_dsnapsData;
    SOJUAdPlacementMetadata *_introVideoAdMetadata;
    NSNumber *_sponsored;
    SOJUSponsoredSlugPosAndText *_sponsoredSlug;
    NSNumber *_subscribable;
    SOJUBroadcastArticleMetadataList *_tileList;
    NSString *_subscribedImage;
    NSString *_horizontalIcon;
    NSString *_region;
    NSString *_promoteDemoteStatus;
    NSString *_hashValue;
    NSString *_searchIcon;
    NSNumber *_isShow;
    NSNumber *_editionVersion;
    NSNumber *_rollingNewsEnabled;
    NSNumber *_isHiddenInStoryScreen;
    NSNumber *_isSubscribed;
    NSArray *_publisherFeatures;
    NSArray *_contentTags;
    NSArray *_segments;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, copy, nonatomic) NSArray *contentTags; // @synthesize contentTags=_contentTags;
@property(readonly, copy, nonatomic) NSArray *publisherFeatures; // @synthesize publisherFeatures=_publisherFeatures;
@property(readonly, copy, nonatomic) NSNumber *isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(readonly, copy, nonatomic) NSNumber *isHiddenInStoryScreen; // @synthesize isHiddenInStoryScreen=_isHiddenInStoryScreen;
@property(readonly, copy, nonatomic) NSNumber *rollingNewsEnabled; // @synthesize rollingNewsEnabled=_rollingNewsEnabled;
@property(readonly, copy, nonatomic) NSNumber *editionVersion; // @synthesize editionVersion=_editionVersion;
@property(readonly, copy, nonatomic) NSNumber *isShow; // @synthesize isShow=_isShow;
@property(readonly, copy, nonatomic) NSString *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(readonly, copy, nonatomic) NSString *hashValue; // @synthesize hashValue=_hashValue;
@property(readonly, copy, nonatomic) NSString *promoteDemoteStatus; // @synthesize promoteDemoteStatus=_promoteDemoteStatus;
@property(readonly, copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSString *horizontalIcon; // @synthesize horizontalIcon=_horizontalIcon;
@property(readonly, copy, nonatomic) NSString *subscribedImage; // @synthesize subscribedImage=_subscribedImage;
@property(readonly, copy, nonatomic) SOJUBroadcastArticleMetadataList *tileList; // @synthesize tileList=_tileList;
@property(readonly, copy, nonatomic) NSNumber *subscribable; // @synthesize subscribable=_subscribable;
@property(readonly, copy, nonatomic) SOJUSponsoredSlugPosAndText *sponsoredSlug; // @synthesize sponsoredSlug=_sponsoredSlug;
@property(readonly, copy, nonatomic) NSNumber *sponsored; // @synthesize sponsored=_sponsored;
@property(readonly, copy, nonatomic) SOJUAdPlacementMetadata *introVideoAdMetadata; // @synthesize introVideoAdMetadata=_introVideoAdMetadata;
@property(readonly, copy, nonatomic) NSArray *dsnapsData; // @synthesize dsnapsData=_dsnapsData;
@property(readonly, copy, nonatomic) NSString *editionPublishingTimestamp; // @synthesize editionPublishingTimestamp=_editionPublishingTimestamp;
@property(readonly, copy, nonatomic) NSNumber *editionId; // @synthesize editionId=_editionId;
@property(readonly, copy, nonatomic) NSString *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(readonly, copy, nonatomic) NSString *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, copy, nonatomic) NSString *introMovie; // @synthesize introMovie=_introMovie;
@property(readonly, copy, nonatomic) NSString *loadingIcon; // @synthesize loadingIcon=_loadingIcon;
@property(readonly, copy, nonatomic) NSString *invertedIcon; // @synthesize invertedIcon=_invertedIcon;
@property(readonly, copy, nonatomic) NSString *filledIcon; // @synthesize filledIcon=_filledIcon;
@property(readonly, copy, nonatomic) NSString *publisherDeeplink; // @synthesize publisherDeeplink=_publisherDeeplink;
@property(readonly, copy, nonatomic) NSString *publisherDescription; // @synthesize publisherDescription=_publisherDescription;
@property(readonly, copy, nonatomic) NSString *publisherFormalName; // @synthesize publisherFormalName=_publisherFormalName;
@property(readonly, copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(readonly, copy, nonatomic) NSNumber *promotedStoriesPagePosition; // @synthesize promotedStoriesPagePosition=_promotedStoriesPagePosition;
@property(readonly, copy, nonatomic) NSNumber *storiesPagePosition; // @synthesize storiesPagePosition=_storiesPagePosition;
@property(readonly, copy, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 position:(id)arg2 storiesPagePosition:(id)arg3 promotedStoriesPagePosition:(id)arg4 publisherName:(id)arg5 publisherFormalName:(id)arg6 publisherDescription:(id)arg7 publisherDeeplink:(id)arg8 filledIcon:(id)arg9 invertedIcon:(id)arg10 loadingIcon:(id)arg11 introMovie:(id)arg12 primaryColor:(id)arg13 secondaryColor:(id)arg14 editionId:(id)arg15 editionPublishingTimestamp:(id)arg16 dsnapsData:(id)arg17 introVideoAdMetadata:(id)arg18 sponsored:(id)arg19 sponsoredSlug:(id)arg20 subscribable:(id)arg21 tileList:(id)arg22 subscribedImage:(id)arg23 horizontalIcon:(id)arg24 region:(id)arg25 promoteDemoteStatus:(id)arg26 hashValue:(id)arg27 searchIcon:(id)arg28 isShow:(id)arg29 editionVersion:(id)arg30 rollingNewsEnabled:(id)arg31 isHiddenInStoryScreen:(id)arg32 isSubscribed:(id)arg33 publisherFeatures:(id)arg34 contentTags:(id)arg35 segments:(id)arg36;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isSubscribedValue;
- (_Bool)isHiddenInStoryScreenValue;
- (_Bool)rollingNewsEnabledValue;
- (long long)editionVersionValue;
- (_Bool)isShowValue;
- (long long)promoteDemoteStatusEnum;
- (_Bool)subscribableValue;
- (_Bool)sponsoredValue;
- (long long)editionIdValue;
- (int)promotedStoriesPagePositionValue;
- (int)storiesPagePositionValue;
- (int)positionValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
