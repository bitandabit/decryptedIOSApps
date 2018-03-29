//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIColor, UIImage;

@interface SCTileViewModel : NSObject
{
    _Bool _isLoading;
    _Bool _isFullyViewed;
    NSString *_tileId;
    NSString *_logoText;
    UIImage *_logoImage;
    NSString *_logoImageURLString;
    NSArray *_covers;
    UIColor *_color;
    double _cropPercentage;
    NSString *_tileTrackingId;
    NSString *_tilePosterId;
}

@property(readonly, copy, nonatomic) NSString *tilePosterId; // @synthesize tilePosterId=_tilePosterId;
@property(readonly, copy, nonatomic) NSString *tileTrackingId; // @synthesize tileTrackingId=_tileTrackingId;
@property(readonly, nonatomic) double cropPercentage; // @synthesize cropPercentage=_cropPercentage;
@property(readonly, nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSArray *covers; // @synthesize covers=_covers;
@property(readonly, copy, nonatomic) NSString *logoImageURLString; // @synthesize logoImageURLString=_logoImageURLString;
@property(readonly, copy, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(readonly, copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(readonly, copy, nonatomic) NSString *tileId; // @synthesize tileId=_tileId;
- (void).cxx_destruct;
- (id)currentCover;
- (id)description;
- (id)initWithTileId:(id)arg1 logoText:(id)arg2 logoImage:(id)arg3 logoImageURLString:(id)arg4 color:(id)arg5 coverViewModels:(id)arg6 isLoading:(_Bool)arg7 isFullyViewed:(_Bool)arg8 tileTrackingId:(id)arg9 tilePosterId:(id)arg10;

@end

