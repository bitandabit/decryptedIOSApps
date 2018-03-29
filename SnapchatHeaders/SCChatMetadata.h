//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatMetadata-Protocol.h"

@class NSDictionary, NSSet, NSString, SCChatSnapchatter, SCContributionStoryPublisher, SCMapPoiShareMetadata, SCMapSnapMetadata, SCSearchStoryMetadata, SCStorySnapMediaContent, SCStorySnapMetadata;

@interface SCChatMetadata : NSObject <SCChatMetadata>
{
    NSDictionary *_urlMediaCardContents;
    NSDictionary *_addressMediaCardContents;
    NSDictionary *_mediaMetadataDicts;
    SCStorySnapMetadata *_storySnapMetadata;
    SCStorySnapMediaContent *_storySnapMediaContent;
    SCChatSnapchatter *_snapchatter;
    SCContributionStoryPublisher *_publisher;
    SCMapSnapMetadata *_mapSnapMetadata;
    SCMapPoiShareMetadata *_mapPoiShareMetadata;
    SCSearchStoryMetadata *_searchStoryMetadata;
    NSDictionary *_searchStorySnapMediaDictionary;
    NSSet *_tappedSnapchatterIds;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) NSSet *tappedSnapchatterIds; // @synthesize tappedSnapchatterIds=_tappedSnapchatterIds;
@property(readonly, copy, nonatomic) NSDictionary *searchStorySnapMediaDictionary; // @synthesize searchStorySnapMediaDictionary=_searchStorySnapMediaDictionary;
@property(readonly, copy, nonatomic) SCSearchStoryMetadata *searchStoryMetadata; // @synthesize searchStoryMetadata=_searchStoryMetadata;
@property(readonly, copy, nonatomic) SCMapPoiShareMetadata *mapPoiShareMetadata; // @synthesize mapPoiShareMetadata=_mapPoiShareMetadata;
@property(readonly, copy, nonatomic) SCMapSnapMetadata *mapSnapMetadata; // @synthesize mapSnapMetadata=_mapSnapMetadata;
@property(readonly, copy, nonatomic) SCContributionStoryPublisher *publisher; // @synthesize publisher=_publisher;
@property(readonly, copy, nonatomic) SCChatSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(readonly, copy, nonatomic) SCStorySnapMediaContent *storySnapMediaContent; // @synthesize storySnapMediaContent=_storySnapMediaContent;
@property(readonly, copy, nonatomic) SCStorySnapMetadata *storySnapMetadata; // @synthesize storySnapMetadata=_storySnapMetadata;
@property(readonly, copy, nonatomic) NSDictionary *mediaMetadataDicts; // @synthesize mediaMetadataDicts=_mediaMetadataDicts;
@property(readonly, copy, nonatomic) NSDictionary *addressMediaCardContents; // @synthesize addressMediaCardContents=_addressMediaCardContents;
@property(readonly, copy, nonatomic) NSDictionary *urlMediaCardContents; // @synthesize urlMediaCardContents=_urlMediaCardContents;
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
- (id)initWithUrlMediaCardContents:(id)arg1 addressMediaCardContents:(id)arg2 mediaMetadataDicts:(id)arg3 storySnapMetadata:(id)arg4 storySnapMediaContent:(id)arg5 snapchatter:(id)arg6 publisher:(id)arg7 mapSnapMetadata:(id)arg8 mapPoiShareMetadata:(id)arg9 searchStoryMetadata:(id)arg10 searchStorySnapMediaDictionary:(id)arg11 tappedSnapchatterIds:(id)arg12;
- (id)_mediaCardThumbnailCacheIds;
- (id)_storySnapContentCacheIds;
- (id)allCacheIds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
