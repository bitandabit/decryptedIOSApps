//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface SCCheetahPublisherTile : NSObject <NSCopying, NSCoding>
{
    NSString *_tileId;
    NSString *_headline;
    NSString *_imageURL;
    NSString *_logoURL;
    NSString *_videoThumbnailURL;
    NSString *_videoThumbnailFirstFrameURL;
    long long _logoLocationType;
    UIColor *_logoReadStateOverlayColor;
}

@property(readonly, copy, nonatomic) UIColor *logoReadStateOverlayColor; // @synthesize logoReadStateOverlayColor=_logoReadStateOverlayColor;
@property(readonly, nonatomic) long long logoLocationType; // @synthesize logoLocationType=_logoLocationType;
@property(readonly, copy, nonatomic) NSString *videoThumbnailFirstFrameURL; // @synthesize videoThumbnailFirstFrameURL=_videoThumbnailFirstFrameURL;
@property(readonly, copy, nonatomic) NSString *videoThumbnailURL; // @synthesize videoThumbnailURL=_videoThumbnailURL;
@property(readonly, copy, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property(readonly, copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *tileId; // @synthesize tileId=_tileId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTileId:(id)arg1 headline:(id)arg2 imageURL:(id)arg3 logoURL:(id)arg4 videoThumbnailURL:(id)arg5 videoThumbnailFirstFrameURL:(id)arg6 logoLocationType:(long long)arg7 logoReadStateOverlayColor:(id)arg8;
- (id)initWithCoder:(id)arg1;

@end
