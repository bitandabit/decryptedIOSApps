//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBAdCloseButton, FBAdImage, FBAdInfoButton, FBNativeAdDataModel, NSString, UIColor, UIImageView, UILabel;

@interface FBInterstitialAdToolbarView : UIView
{
    UIColor *_textColor;
    UIColor *_activeColor;
    UIColor *_inactiveColor;
    FBAdImage *_icon;
    NSString *_title;
    id <FBInterstitialAdToolbarViewDelegate> _delegate;
    FBNativeAdDataModel *_dataModel;
    UILabel *_titleView;
    UIImageView *_iconImageView;
    FBAdCloseButton *_closeButton;
    FBAdInfoButton *_detailsButton;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _forcedViewRemainingTime;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 forcedViewRemainingTime; // @synthesize forcedViewRemainingTime=_forcedViewRemainingTime;
@property(retain, nonatomic) FBAdInfoButton *detailsButton; // @synthesize detailsButton=_detailsButton;
@property(retain, nonatomic) FBAdCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <FBInterstitialAdToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) FBAdImage *icon; // @synthesize icon=_icon;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(copy, nonatomic) UIColor *inactiveColor; // @synthesize inactiveColor=_inactiveColor;
@property(copy, nonatomic) UIColor *activeColor; // @synthesize activeColor=_activeColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (void)details:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)disableForcedView;
- (id)init;

@end
