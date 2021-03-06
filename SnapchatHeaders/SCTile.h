//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, NSURL, SCTileCover, UIColor;
@protocol SCTileDataSource;

@interface SCTile : NSObject <NSCoding, NSCopying>
{
    _Bool _displayHasChanged;
    _Bool _isVideo;
    id <SCTileDataSource> _dataSource;
    NSString *_tileId;
    unsigned long long _type;
    NSString *_discoverChannelName;
    NSString *_sharedStoryId;
    unsigned long long _logoType;
    NSString *_logoText;
    NSURL *_logoURL;
    NSArray *_covers;
    UIColor *_color;
    NSString *_currentTileCoverId;
    NSURL *_webURL;
    unsigned long long _logoIconMediaState;
}

+ (CDUnknownBlockType)fullyViewedDateSortComparator;
+ (unsigned long long)logoTypeWithLogoTypeString:(id)arg1;
+ (void)recoverMissingTileLogoIconForTile:(id)arg1;
@property(nonatomic) unsigned long long logoIconMediaState; // @synthesize logoIconMediaState=_logoIconMediaState;
@property(readonly, nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(readonly, copy, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSString *currentTileCoverId; // @synthesize currentTileCoverId=_currentTileCoverId;
@property(nonatomic) _Bool displayHasChanged; // @synthesize displayHasChanged=_displayHasChanged;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSArray *covers; // @synthesize covers=_covers;
@property(copy, nonatomic) NSURL *logoURL; // @synthesize logoURL=_logoURL;
@property(readonly, copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(readonly, nonatomic) unsigned long long logoType; // @synthesize logoType=_logoType;
@property(readonly, copy, nonatomic) NSString *sharedStoryId; // @synthesize sharedStoryId=_sharedStoryId;
@property(readonly, copy, nonatomic) NSString *discoverChannelName; // @synthesize discoverChannelName=_discoverChannelName;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *tileId; // @synthesize tileId=_tileId;
@property(nonatomic) __weak id <SCTileDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)displaysEqual:(id)arg1;
- (_Bool)isFullyViewed;
- (id)cacheKeyForTileLogoImage;
- (void)didDecodeObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)cacheMediaIds;
- (_Bool)isLoaded;
- (_Bool)isLoading;
- (unsigned long long)coverLoadState;
@property(readonly, nonatomic) SCTileCover *currentTileCover;
- (void)updateWithTileId:(id)arg1 type:(unsigned long long)arg2 logoType:(unsigned long long)arg3 logo:(id)arg4 color:(id)arg5 tileCovers:(id)arg6 dataSource:(id)arg7;
- (void)updateWithTileId:(id)arg1 type:(unsigned long long)arg2 logoType:(unsigned long long)arg3 logo:(id)arg4 color:(id)arg5 sojuTiles:(id)arg6 dataSource:(id)arg7;
- (id)initWithTile:(id)arg1;
- (id)_currentTileCover;
- (void)coverWithPostProcess:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)logoIconWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLogoImageMediaImmediately:(_Bool)arg1;
- (void)fetchMediaImmediately:(_Bool)arg1;

@end

