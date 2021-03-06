//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, UIImage;

@interface SCStickerRating : NSObject
{
    _Bool _hasBeenTapped;
    NSNumber *_rating;
    NSString *_style;
    UIImage *_selectedStateAsset;
    UIImage *_unselectedStateAsset;
}

@property(nonatomic) _Bool hasBeenTapped; // @synthesize hasBeenTapped=_hasBeenTapped;
@property(retain, nonatomic) UIImage *unselectedStateAsset; // @synthesize unselectedStateAsset=_unselectedStateAsset;
@property(retain, nonatomic) UIImage *selectedStateAsset; // @synthesize selectedStateAsset=_selectedStateAsset;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
- (void).cxx_destruct;
- (id)initWithRating:(id)arg1 style:(id)arg2 selectedStateAsset:(id)arg3 unselectedStateAsset:(id)arg4 hasBeenTapped:(_Bool)arg5;

@end

