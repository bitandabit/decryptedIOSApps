//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTEntityHeaderContentController.h"
#import "SPTFreeTierCollectionHeaderViewModelDelegate.h"

@class NSString, SPTFreeTierCollectionGLUETheme, SPTFreeTierCollectionHeaderContentView;

@interface SPTFreeTierCollectionHeaderContentViewController : UIViewController <SPTEntityHeaderContentController, SPTFreeTierCollectionHeaderViewModelDelegate>
{
    id <SPTFreeTierCollectionHeaderViewModel> _viewModel;
    SPTFreeTierCollectionGLUETheme *_theme;
    SPTFreeTierCollectionHeaderContentView *_headerView;
}

@property(retain, nonatomic) SPTFreeTierCollectionHeaderContentView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SPTFreeTierCollectionGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTFreeTierCollectionHeaderViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)didChangeFreeTierCollectionHeaderViewModel:(id)arg1;
- (void)didTapCreatePlaylistButton;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

