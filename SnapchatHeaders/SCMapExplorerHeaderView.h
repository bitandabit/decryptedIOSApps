//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSString, SCGrowingButton, SCShareLocationButton, UILabel;
@protocol SCMapExplorerHeaderViewDelegate;

@interface SCMapExplorerHeaderView : UIView
{
    UILabel *_titleLabel;
    CALayer *_lineLayer;
    id <SCMapExplorerHeaderViewDelegate> _delegate;
    SCGrowingButton *_closeButton;
    SCShareLocationButton *_shareLocationButton;
}

+ (id)_titleLabelTextAttributes;
@property(readonly, nonatomic) SCShareLocationButton *shareLocationButton; // @synthesize shareLocationButton=_shareLocationButton;
@property(readonly, nonatomic) SCGrowingButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <SCMapExplorerHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapShareLocation;
- (void)_didTapCloseButton;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

