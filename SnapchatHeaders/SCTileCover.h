//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, NSURL, SCQueuePerformer, UIColor;

@interface SCTileCover : NSObject <NSCoding>
{
    _Bool _displayHasChanged;
    unsigned long long _loadState;
    NSString *_tileCoverId;
    NSString *_trackingId;
    NSString *_headline;
    NSURL *_imageURL;
    long long _textJustificationFormat;
    double _horizontalTileCropPercentage;
    double _readTileCropPercentage;
    double _verticalV2TileCropPctOffset;
    double _horizontalV2TileCropPctOffset;
    double _collapsedV2TileCropPctOffset;
    double _mediumV2TileCropPctOffset;
    NSString *_logoURL;
    NSString *_logoText;
    UIColor *_logoOverlayColor;
    SCQueuePerformer *_performer;
}

+ (void)recoverMissingCoverImageForTileCover:(id)arg1 tileType:(unsigned long long)arg2;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) UIColor *logoOverlayColor; // @synthesize logoOverlayColor=_logoOverlayColor;
@property(readonly, copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(readonly, copy, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property(readonly, nonatomic) double mediumV2TileCropPctOffset; // @synthesize mediumV2TileCropPctOffset=_mediumV2TileCropPctOffset;
@property(readonly, nonatomic) double collapsedV2TileCropPctOffset; // @synthesize collapsedV2TileCropPctOffset=_collapsedV2TileCropPctOffset;
@property(readonly, nonatomic) double horizontalV2TileCropPctOffset; // @synthesize horizontalV2TileCropPctOffset=_horizontalV2TileCropPctOffset;
@property(readonly, nonatomic) double verticalV2TileCropPctOffset; // @synthesize verticalV2TileCropPctOffset=_verticalV2TileCropPctOffset;
@property(readonly, nonatomic) double readTileCropPercentage; // @synthesize readTileCropPercentage=_readTileCropPercentage;
@property(readonly, nonatomic) double horizontalTileCropPercentage; // @synthesize horizontalTileCropPercentage=_horizontalTileCropPercentage;
@property(nonatomic) _Bool displayHasChanged; // @synthesize displayHasChanged=_displayHasChanged;
@property(readonly, nonatomic) long long textJustificationFormat; // @synthesize textJustificationFormat=_textJustificationFormat;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(readonly, copy, nonatomic) NSString *tileCoverId; // @synthesize tileCoverId=_tileCoverId;
@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
- (void).cxx_destruct;
- (void)updateWithTileCover:(id)arg1;
- (_Bool)displaysEqual:(id)arg1;
- (id)description;
- (void)_didDecodeObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_cacheKeyForCoverImageMedia;
- (id)cacheMediaIds;
- (id)initWithTileCover:(id)arg1;
- (void)updateWithSojuTileCover:(id)arg1;
- (void)_sendTileRequestWithRequestKey:(id)arg1 imageURL:(id)arg2 tileType:(unsigned long long)arg3 connectivity:(long long)arg4 priority:(long long)arg5 contexts:(id)arg6;
- (void)coverImageWithPostProcess:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)coverImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchMediaImmediately:(_Bool)arg1 tileType:(unsigned long long)arg2 currentEditionId:(id)arg3;
- (void)fetchMediaImmediately:(_Bool)arg1 tileType:(unsigned long long)arg2;

@end

