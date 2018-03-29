//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTSearch2RecentsViewControllerProtocol.h"
#import "SPTSearchFancyRecentsDataSourceDelegate.h"

@class NSString, SPTHUBSearchRecentsContext;

@interface SPTSearch2RecentsViewController : UIViewController <SPTSearchFancyRecentsDataSourceDelegate, SPContentInsetViewController, SPTSearch2RecentsViewControllerProtocol>
{
    _Bool _automaticallyAdjustsInsets;
    id <SPTSearch2RecentsViewControllerDelegate> _delegate;
    unsigned long long _state;
    SPTHUBSearchRecentsContext *_context;
    struct UIEdgeInsets _insets;
}

@property(readonly, nonatomic) SPTHUBSearchRecentsContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool automaticallyAdjustsInsets; // @synthesize automaticallyAdjustsInsets=_automaticallyAdjustsInsets;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) __weak id <SPTSearch2RecentsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateStateForDataSource:(id)arg1;
- (void)adjustInsetsIfNeeded;
- (void)layoutSubviews;
- (void)scrollToTop;
- (void)sp_updateContentInsets;
- (void)fancyRecentsDataSourceItemsDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setState:(unsigned long long)arg1;
- (id)initWithDependencies:(id)arg1 configuration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
