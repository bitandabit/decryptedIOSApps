//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryDrawingStrokeBuilder : NSObject
{
    NSNumber *_color;
    NSNumber *_strokeSize;
    NSArray *_points;
    NSString *_emoji;
    NSString *_drawerType;
}

+ (id)withJUGalleryDrawingStroke:(id)arg1;
- (void).cxx_destruct;
- (id)setDrawerType:(id)arg1;
- (id)setEmoji:(id)arg1;
- (id)setPoints:(id)arg1;
- (id)setStrokeSize:(id)arg1;
- (id)setColor:(id)arg1;
- (id)build;
- (id)setDrawerTypeEnum:(long long)arg1;
- (id)setStrokeSizeValue:(double)arg1;
- (id)setColorValue:(int)arg1;

@end

