//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAGalleryStoryShare : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *withSearch;
    NSNumber *snapCount;
    NSNumber *snapTimeSec;
    NSNumber *snapTimeIsLoop;
    long long snapSource;
    long long galleryContextMenuSource;
    long long storyType;
    long long storyTypeSpecific;
    long long playerVersion;
    long long entryType;
    NSString *entryId;
    NSString *snapsShared;
    NSString *galleryCollectionCategory;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getGalleryCollectionCategory;
- (void)setGalleryCollectionCategory:(id)arg1;
- (id)getSnapsShared;
- (void)setSnapsShared:(id)arg1;
- (id)getEntryId;
- (void)setEntryId:(id)arg1;
- (long long)getEntryType;
- (void)setEntryType:(long long)arg1;
- (long long)getPlayerVersion;
- (void)setPlayerVersion:(long long)arg1;
- (long long)getStoryTypeSpecific;
- (void)setStoryTypeSpecific:(long long)arg1;
- (long long)getStoryType;
- (void)setStoryType:(long long)arg1;
- (long long)getGalleryContextMenuSource;
- (void)setGalleryContextMenuSource:(long long)arg1;
- (long long)getSnapSource;
- (void)setSnapSource:(long long)arg1;
- (_Bool)getSnapTimeIsLoop;
- (void)setSnapTimeIsLoop:(_Bool)arg1;
- (double)getSnapTimeSec;
- (void)setSnapTimeSec:(double)arg1;
- (long long)getSnapCount;
- (void)setSnapCount:(long long)arg1;
- (_Bool)getWithSearch;
- (void)setWithSearch:(_Bool)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
