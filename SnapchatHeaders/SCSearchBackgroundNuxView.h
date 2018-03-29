//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCButton, UIImageView, UILabel;
@protocol SCSearchBackgroundNuxViewViewDelegate;

@interface SCSearchBackgroundNuxView : UIView
{
    UIImageView *_backgroundImageView;
    UILabel *_textLabel;
    SCButton *_addContactsButton;
    id <SCSearchBackgroundNuxViewViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSearchBackgroundNuxViewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addContactsButtonClicked;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
