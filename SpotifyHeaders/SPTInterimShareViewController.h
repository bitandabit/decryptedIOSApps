//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTImageLoaderDelegate.h"
#import "SPTShareViewControllerProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GLUELabel, NSLayoutConstraint, NSString, SPTLayoutConstraintBuilder, SPTShareData, SPTShareItemView, SPTShareLogger, SPTShareViewModel, UIButton, UITableView, UIView;

@interface SPTInterimShareViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPTImageLoaderDelegate, SPTShareViewControllerProtocol>
{
    _Bool _isInPopover;
    id <SPTShareViewControllerDelegate> _delegate;
    CDUnknownBlockType _completion;
    SPTShareViewModel *_shareViewModel;
    SPTShareData *_shareData;
    SPTShareLogger *_shareLogger;
    NSString *_sessionId;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTImageLoader> _imageLoader;
    id <GLUETheme> _theme;
    SPTLayoutConstraintBuilder *_layout;
    SPTShareItemView *_shareItemView;
    UIView *_navBarView;
    UIView *_mainContainerView;
    UIView *_tableviewContainerView;
    UIView *_shareItemContainerView;
    GLUELabel *_navbarTitleLabel;
    UIButton *_cancelButton;
    UITableView *_tableView;
    NSLayoutConstraint *_mainContainerViewBottomContraint;
}

@property(retain, nonatomic) NSLayoutConstraint *mainContainerViewBottomContraint; // @synthesize mainContainerViewBottomContraint=_mainContainerViewBottomContraint;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) GLUELabel *navbarTitleLabel; // @synthesize navbarTitleLabel=_navbarTitleLabel;
@property(retain, nonatomic) UIView *shareItemContainerView; // @synthesize shareItemContainerView=_shareItemContainerView;
@property(retain, nonatomic) UIView *tableviewContainerView; // @synthesize tableviewContainerView=_tableviewContainerView;
@property(retain, nonatomic) UIView *mainContainerView; // @synthesize mainContainerView=_mainContainerView;
@property(retain, nonatomic) UIView *navBarView; // @synthesize navBarView=_navBarView;
@property(retain, nonatomic) SPTShareItemView *shareItemView; // @synthesize shareItemView=_shareItemView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(nonatomic) _Bool isInPopover; // @synthesize isInPopover=_isInPopover;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
@property(retain, nonatomic) SPTShareData *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) SPTShareViewModel *shareViewModel; // @synthesize shareViewModel=_shareViewModel;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak id <SPTShareViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateViewConstraints;
- (void)addViewConstraints;
- (void)dismissShareViewControllerAnimations:(CDUnknownBlockType)arg1;
- (void)dismissShareViewController:(CDUnknownBlockType)arg1;
- (void)private_dismissShareViewController;
- (void)animateTableViewCells:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateMainContainerView:(_Bool)arg1;
- (id)visibleCellsForDeviceType:(long long)arg1;
- (void)setupTableView;
- (void)setupShareItemView;
- (void)setupContainerViews;
- (void)setupNavBarView;
- (void)setupMainView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithShareLogger:(id)arg1 sessionId:(id)arg2 shareData:(id)arg3 shareViewModel:(id)arg4 deeplinkHandler:(id)arg5 imageLoaderFactory:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

