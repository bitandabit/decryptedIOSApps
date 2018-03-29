//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol SCSnapAdsPortalAdOverviewTabFooterViewDelegate;

@interface SCSnapAdsPortalAdOverviewTabFooterView : UIView
{
    UIButton *_dateButton;
    UIButton *_leftArrowButton;
    UIButton *_rightArrowButton;
    id <SCSnapAdsPortalAdOverviewTabFooterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSnapAdsPortalAdOverviewTabFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rightArrowButtonPressed;
- (void)leftArrowButtonPressed;
- (void)dateButtonPressed;
- (void)updateFooterWithDateButtonEnabled:(_Bool)arg1 leftArrowButtonEnabled:(_Bool)arg2 rightArrowButtonEnabled:(_Bool)arg3;
- (void)updateFooterTitle:(id)arg1;
- (void)cleanup;
- (id)initWithFrame:(struct CGRect)arg1;

@end
