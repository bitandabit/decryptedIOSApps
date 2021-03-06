//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCContactsCTAFooterViewDelegate-Protocol.h"

@class NSString, SCContactsCTAFooterView, UIImageView;
@protocol SCSearchRequestAddressBookAccessViewDelegate;

@interface SCSearchRequestAddressBookAccessView : UIView <SCContactsCTAFooterViewDelegate>
{
    UIImageView *_backgroundImageView;
    SCContactsCTAFooterView *_addContactsView;
    id <SCSearchRequestAddressBookAccessViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSearchRequestAddressBookAccessViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addContactsButtonClicked:(_Bool)arg1 skipPhoneVerification:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

