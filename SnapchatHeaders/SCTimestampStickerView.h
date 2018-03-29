//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCInfoStickerView.h"

@class NSDate, NSDateFormatter, SCTimestampMetadata, UIView;
@protocol SCTimestampStickerViewDelegate;

@interface SCTimestampStickerView : SCInfoStickerView
{
    SCTimestampMetadata *_timestampMetadata;
    UIView *_timestampViews[3];
    unsigned long long _currentStyle;
    UIView *_currentView;
    NSDateFormatter *_dateFormatter;
    NSDate *_date;
    id <SCTimestampStickerViewDelegate> _delegate;
    long long _currentSOJUStyle;
}

@property(nonatomic) long long currentSOJUStyle; // @synthesize currentSOJUStyle=_currentSOJUStyle;
@property(nonatomic) __weak id <SCTimestampStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setOrientation:(long long)arg1;
- (id)alphabeticView;
- (id)numericView;
- (id)timestampView;
- (void)_updateCurrentViewAndTransformWith:(struct CGAffineTransform)arg1;
- (void)_updateCurrentViewAndTransformWith:(struct CGAffineTransform)arg1 center:(struct CGPoint)arg2;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)shouldRespondToTouchControl:(id)arg1;
- (void)pinch:(id)arg1;
- (void)rotation:(id)arg1;
- (void)pan:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 time:(id)arg2 target:(long long)arg3;

@end

