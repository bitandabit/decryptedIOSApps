//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPContentInsetViewController.h"
#import "SPTCollectionPromoting.h"
#import "SPTLocalFilesImportModelDelegate.h"
#import "SPTPageController.h"
#import "UIAlertViewDelegate.h"
#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"

@class NSMutableArray, NSString, NSURL, SPTLocalFilesImportModel, SPTLocalFilesLogger, SPTProgressView, SPTTabControl, UIAlertView, UIBarButtonItem, UIPageViewController, UIToolbar;

@interface SPTFilePickerViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, SPTLocalFilesImportModelDelegate, UIAlertViewDelegate, SPTCollectionPromoting, SPContentInsetViewController, SPTPageController>
{
    _Bool _filtering;
    long long _selectedSection;
    SPTTabControl *_tabControl;
    SPTLocalFilesImportModel *_model;
    UIPageViewController *_pageControl;
    NSMutableArray *_sections;
    UIToolbar *_toolbar;
    CDUnknownBlockType _onSelect;
    UIAlertView *_cancelAlertView;
    SPTProgressView *_progressView;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTLocalFilesLogger *_logger;
    UIBarButtonItem *_importBarButtonItem;
}

@property(retain, nonatomic) UIBarButtonItem *importBarButtonItem; // @synthesize importBarButtonItem=_importBarButtonItem;
@property(nonatomic) _Bool filtering; // @synthesize filtering=_filtering;
@property(retain, nonatomic) SPTLocalFilesLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIAlertView *cancelAlertView; // @synthesize cancelAlertView=_cancelAlertView;
@property(copy, nonatomic) CDUnknownBlockType onSelect; // @synthesize onSelect=_onSelect;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UIPageViewController *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) SPTLocalFilesImportModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(nonatomic) long long selectedSection; // @synthesize selectedSection=_selectedSection;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)promote:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sp_updateContentInsets;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)importModelDidUpdate:(id)arg1;
- (void)tabDidChange:(id)arg1;
- (void)selectActiveSection:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)recalculateFrames;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setupSections;
- (void)buildPlaylistsSection;
- (void)buildArtistsSection;
- (void)buildAlbumsSection;
- (void)buildSongsSection;
- (CDUnknownBlockType)textForEmptyStateBlockPlaylistsEmpty:(id)arg1 filtered:(id)arg2 userFiltered:(id)arg3;
- (CDUnknownBlockType)textForEmptyStateBlockSongsEmpty:(id)arg1 filtered:(id)arg2 userFiltered:(id)arg3;
- (void)doImport;
- (void)toggleSelectAll;
- (void)updateToolbar;
- (void)setupToolbar;
- (void)cancelImport;
- (void)dismiss;
- (void)loadMedia;
- (void)viewDidLoad;
- (void)setupWithModel:(id)arg1 imageLoaderFactory:(id)arg2 logger:(id)arg3 onSelect:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

