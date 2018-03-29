//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImage, UIImageView;
@protocol SCPaymentSwipeSenderBillViewDelegate;

@interface SCPaymentSwipeSenderBillView : UIView
{
    _Bool _isIdle;
    id <SCPaymentSwipeSenderBillViewDelegate> _delegate;
    UIImageView *_movingBillView;
    UIImageView *_stillBillView;
    UIImage *_billImage;
    NSMutableArray *_billList;
    long long _maxYellowLevel;
    long long _yellowLevel;
    double _billStartY;
    struct CGPoint _origin;
}

@property(nonatomic) double billStartY; // @synthesize billStartY=_billStartY;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) long long yellowLevel; // @synthesize yellowLevel=_yellowLevel;
@property(nonatomic) long long maxYellowLevel; // @synthesize maxYellowLevel=_maxYellowLevel;
@property(retain, nonatomic) NSMutableArray *billList; // @synthesize billList=_billList;
@property(retain, nonatomic) UIImage *billImage; // @synthesize billImage=_billImage;
@property(retain, nonatomic) UIImageView *stillBillView; // @synthesize stillBillView=_stillBillView;
@property(retain, nonatomic) UIImageView *movingBillView; // @synthesize movingBillView=_movingBillView;
@property(nonatomic) _Bool isIdle; // @synthesize isIdle=_isIdle;
@property(nonatomic) __weak id <SCPaymentSwipeSenderBillViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleSwipeCompletionFailure;
- (void)handleSwipeDownCompletionSuccess;
- (void)handleSwipeUpCompletionSuccess;
- (void)handleSwipeChangedWithDeltaY:(double)arg1;
- (void)handleSwipeBegan;
- (void)showStillBill;
- (void)animateIdleBills;
- (long long)yellowLevelForSwipeInterval:(double)arg1;
- (void)updateBillColor;
- (void)updateBillColorForYellowLevel:(long long)arg1;
- (void)animateBillFlyIn;
- (void)loadBillViews;
- (id)initWithFrame:(struct CGRect)arg1 billStartY:(double)arg2;

@end

