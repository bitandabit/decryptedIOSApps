//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCExpandedButton, SCGradientView, SCSentinel, UILabel, UITapGestureRecognizer;
@protocol SCGalleryFullSearchResultHeaderBarDelegate;

@interface SCGalleryFullSearchResultHeaderBar : UIView <UIGestureRecognizerDelegate>
{
    unsigned long long _mode;
    SCSentinel *_sentinel;
    UITapGestureRecognizer *_tapToScrollGestureRecognizer;
    SCExpandedButton *_backButton;
    SCExpandedButton *_selectButton;
    UILabel *_titleLabel;
    SCGradientView *_selectContainerView;
    SCExpandedButton *_selectBackButton;
    UILabel *_selectTitleLabel;
    UILabel *_selectCountLabel;
    UIView *_containerView;
    id <SCGalleryFullSearchResultHeaderBarDelegate> _delegate;
    long long _selectedItemCount;
}

+ (double)height;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long selectedItemCount; // @synthesize selectedItemCount=_selectedItemCount;
@property(nonatomic) __weak id <SCGalleryFullSearchResultHeaderBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_exitSelectModeAnimated:(_Bool)arg1;
- (void)_enterSelectModeAnimated:(_Bool)arg1;
- (struct CGRect)_modeContainerViewBounds;
- (void)_didPressSelectBackButton;
- (void)_didPressSelectButton;
- (void)_didPressBackButton;
- (void)_handleTapToScroll:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 searchResultTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
