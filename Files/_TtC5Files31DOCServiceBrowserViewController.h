//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DOCAppearance, DOCConcreteLocation, DOCConfiguration, DOCDocumentSource, NSArray, _TtC5Files24DOCRecentsViewController, _TtC5Files40DOCServiceDocumentProviderViewController;
@protocol DOCHostBrowserViewControllerProxy;

@interface _TtC5Files31DOCServiceBrowserViewController : UIViewController
{
    // Error parsing type: , name: hostProxy
    // Error parsing type: , name: strongHostProxy
    // Error parsing type: , name: configuration
    // Error parsing type: , name: lastAppearance
    // Error parsing type: , name: currentViewController
    // Error parsing type: , name: currentSource
    // Error parsing type: , name: hostProvidedActions
    // Error parsing type: , name: builtinActions
    // Error parsing type: , name: searchContext
    // Error parsing type: , name: cachedRecentsViewController.storage
    // Error parsing type: , name: currentLocation
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didFinishGatheringItemsAndThumbnails;
- (void)fileProviderViewControllerDidFinishGatheringItemsAndThumbnails:(id)arg1;
- (void)dismissButtonWasTappedIn:(id)arg1;
- (void)locationsButtonWasTappedIn:(id)arg1 source:(struct CGRect)arg2;
- (void)didUpdateNumberOfItems:(unsigned long long)arg1;
- (void)isDisplayingEmptyCollection:(_Bool)arg1;
- (void)wantsToShowInfoFor:(id)arg1;
- (void)wantsToCreateNewFolder;
- (void)wantsToCreateNewFile;
- (void)builtinActionsDidChangeWithActions:(id)arg1;
- (void)didTriggerFPUIActionWithIdentifier:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3 title:(id)arg4 on:(id)arg5;
- (void)didSelectWithItems:(id)arg1;
- (void)didCommitPreviewOf:(id)arg1;
- (void)didPickWithDocument:(id)arg1;
- (void)didPickWithLocation:(id)arg1 forceReplaceLocation:(_Bool)arg2;
- (void)didPickWithLocation:(id)arg1;
- (void)didUpdateImportSupportInCurrentLocationTo:(_Bool)arg1;
- (void)didUpdateCurrentLocationCanSelectTo:(_Bool)arg1;
- (void)didUpdateCurrentLocationIsWritableTo:(_Bool)arg1;
- (void)getInProcessDisplayInformationForItem:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)revealItem:(id)arg1;
- (void)deselectAllItems;
- (void)selectAllItems;
- (void)clearCurrentInteraction;
- (void)clearCurrentOpenInteraction;
- (void)createFolderNamed:(id)arg1;
- (void)updateSearchContext:(id)arg1;
- (void)getPopoverTrackerForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getTransitionControllerForItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getTransitionControllerForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)importDocumentWithURL:(id)arg1 intoLocation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)importDocumentWithURLWrapper:(id)arg1 intoLocation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_doImportDocumentWithSourceURL:(id)arg1 destinationItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchParentLocationForLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchItemForURL:(id)arg1 bumpLastOpenDate:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getSaveLocationForCurrentBrowserOrDefaultSaveLocationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getDefaultSaveLocationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getDefaultSourceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getDefaultLocation:(CDUnknownBlockType)arg1;
- (void)hostProvidedActionsDidChange:(id)arg1;
- (void)performBuiltinActionWithIdentifier:(id)arg1;
- (void)performHostActionWithIdentifier:(id)arg1;
- (void)deleteAllTrashedFiles;
- (void)recoverAllTrashedFiles;
- (void)showContentForLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(nonatomic, retain) DOCConcreteLocation *currentLocation; // @synthesize currentLocation;
- (void)showPickerForLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateAppearance:(id)arg1;
- (void)showRecentsViewController;
@property(nonatomic, retain) _TtC5Files24DOCRecentsViewController *cachedRecentsViewController;
- (void)showPickerUIWithSource:(id)arg1;
- (void)showFileProviderUIWithSource:(id)arg1 initialLocation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showViewController:(id)arg1;
- (void)hideCurrentViewControllers;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithHostProxy:(id)arg1 configuration:(id)arg2;
@property(nonatomic, copy) NSArray *builtinActions; // @synthesize builtinActions;
@property(nonatomic, copy) NSArray *hostProvidedActions; // @synthesize hostProvidedActions;
@property(nonatomic, retain) DOCDocumentSource *currentSource; // @synthesize currentSource;
@property(nonatomic) __weak _TtC5Files40DOCServiceDocumentProviderViewController *currentViewController; // @synthesize currentViewController;
@property(nonatomic, retain) DOCAppearance *lastAppearance; // @synthesize lastAppearance;
@property(nonatomic, readonly) DOCConfiguration *configuration; // @synthesize configuration;
@property(nonatomic, retain) id <DOCHostBrowserViewControllerProxy> strongHostProxy; // @synthesize strongHostProxy;
@property(nonatomic) __weak id <DOCHostBrowserViewControllerProxy> hostProxy; // @synthesize hostProxy;

@end
