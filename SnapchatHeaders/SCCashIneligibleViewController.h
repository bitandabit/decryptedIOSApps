//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SCButton;
@protocol SCCashIneligibleVCDelegate;

@interface SCCashIneligibleViewController : UIViewController
{
    id <SCCashIneligibleVCDelegate> _delegate;
    SCButton *_okayButton;
}

@property(retain, nonatomic) SCButton *okayButton; // @synthesize okayButton=_okayButton;
@property(nonatomic) __weak id <SCCashIneligibleVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initOkayButton;
- (void)initBackground;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)getPageViewName;

@end
