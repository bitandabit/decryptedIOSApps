//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC5Files40DOCServiceDocumentProviderViewController.h"

#import "FPUIActionViewControllerDelegate-Protocol.h"

@class DOCConfiguration, FPItem, FPItemCollection, NSArray, NSDictionary, UIDocumentBrowserAction, _TtC5Files21DOCFileProviderSource, _TtC5Files31DOCItemCollectionViewController;

@interface _TtC5Files29DOCFileProviderViewController : _TtC5Files40DOCServiceDocumentProviderViewController <FPUIActionViewControllerDelegate>
{
    // Error parsing type: , name: fileProviderConfiguration
    // Error parsing type: , name: urlToItemCache
    // Error parsing type: , name: itemCollectionViewController
    // Error parsing type: , name: lastSelectedItem
    // Error parsing type: , name: lastOpenedItem
    // Error parsing type: , name: interactionDelegate
    // Error parsing type: , name: testingDelegate
    // Error parsing type: , name: isCurrentLocationWritable
    // Error parsing type: , name: collectionHasFinishedGatheringItemsAndThumbnails
    // Error parsing type: , name: currentLocationCanSelect
    // Error parsing type: , name: shouldRecoverFromError
    // Error parsing type: , name: appearance
    // Error parsing type: , name: selectedItems
    // Error parsing type: , name: currentItems
    // Error parsing type: , name: customFileProviderActions
    // Error parsing type: , name: customFileProviderUIActions
    // Error parsing type: , name: copyAction.storage
    // Error parsing type: , name: duplicateAction.storage
    // Error parsing type: , name: favoriteAction.storage
    // Error parsing type: , name: unfavoriteAction.storage
    // Error parsing type: , name: mixedDeleteAction.storage
    // Error parsing type: , name: finishGatheringObserver
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)renameController:(id)arg1 didRename:(id)arg2;
- (id)builtinActionsFor:(id)arg1;
- (id)filteredActionsFor:(long long)arg1 items:(id)arg2;
- (void)errorControllerWithWantsToRetry:(id)arg1;
- (void)actionControllerDidFinishAction:(id)arg1 error:(id)arg2;
- (void)presentAuthenticationUIFor:(id)arg1 error:(id)arg2;
- (_Bool)itemCollection:(id)arg1 didEncounterError:(id)arg2;
- (void)itemCollectionWithDidUpdateContent:(id)arg1;
- (void)itemCollection:(id)arg1 wantsToShowInfoFor:(id)arg2;
- (void)itemCollectionWithWantsToCreateNewFolderOn:(id)arg1;
- (void)itemCollectionWithWantsToCreateNewFileOn:(id)arg1;
- (_Bool)itemCollectionWithCanCreateNewFileOn:(id)arg1;
- (void)itemCollection:(id)arg1 perform:(id)arg2 on:(id)arg3;
- (_Bool)itemCollectionWithCanShowMenuController:(id)arg1 for:(id)arg2;
- (id)itemCollection:(id)arg1 actionsFor:(id)arg2;
- (void)itemCollection:(id)arg1 didEndDisplaying:(id)arg2;
- (void)prepareItemAndNotifyIfNeeded:(id)arg1 isCommittingPreview:(_Bool)arg2;
- (void)itemCollection:(id)arg1 didSelect:(id)arg2 isCommittingPreview:(_Bool)arg3;
- (void)itemCollection:(id)arg1 selectionDidChangeTo:(id)arg2;
- (void)itemCollectionWithDidFinishGatheringItemsAndThumbnails:(id)arg1;
- (void)itemCollectionWithDidFinishGathering:(id)arg1;
- (void)itemCollection:(id)arg1 didUpdateCurrentLocationIsWritable:(_Bool)arg2;
- (void)itemCollection:(id)arg1 didUpdateImportSupport:(_Bool)arg2;
- (void)dealloc;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)revealWithItem:(id)arg1;
- (void)clearCurrentInteraction;
- (void)clearCurrentOpenInteraction;
- (void)updateSearchContext:(id)arg1;
- (void)perform:(id)arg1 on:(id)arg2;
- (void)deselectAllItems;
- (void)selectAllItems;
- (void)deleteAllTrashedFiles;
- (void)recoverAllTrashedFiles;
- (id)getCurrentLocation;
- (void)getViewFor:(id)arg1:(CDUnknownBlockType)arg2;
- (void)getPopoverTrackerFor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getTransitionControllerForItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getTransitionControllerForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getCurrentCollectionInformationForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getCurrentCollectionInformationForItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateAppearance:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) CDUnknownBlockType finishGatheringObserver; // @synthesize finishGatheringObserver;
@property(nonatomic, retain) UIDocumentBrowserAction *mixedDeleteAction;
@property(nonatomic, retain) UIDocumentBrowserAction *unfavoriteAction;
@property(nonatomic, retain) UIDocumentBrowserAction *favoriteAction;
@property(nonatomic, retain) UIDocumentBrowserAction *duplicateAction;
@property(nonatomic, retain) UIDocumentBrowserAction *copyAction;
@property(nonatomic, copy) NSArray *customFileProviderUIActions; // @synthesize customFileProviderUIActions;
@property(nonatomic, copy) NSArray *customFileProviderActions; // @synthesize customFileProviderActions;
@property(nonatomic, copy) NSArray *currentItems; // @synthesize currentItems;
@property(nonatomic, readonly) FPItem *currentCollectionItem;
@property(nonatomic, copy) NSArray *selectedItems; // @synthesize selectedItems;
@property(nonatomic) _Bool shouldRecoverFromError; // @synthesize shouldRecoverFromError;
@property(nonatomic) _Bool currentLocationCanSelect; // @synthesize currentLocationCanSelect;
@property(nonatomic) _Bool collectionHasFinishedGatheringItemsAndThumbnails; // @synthesize collectionHasFinishedGatheringItemsAndThumbnails;
@property(nonatomic) _Bool isCurrentLocationWritable; // @synthesize isCurrentLocationWritable;
@property(nonatomic, retain) FPItem *lastOpenedItem; // @synthesize lastOpenedItem;
@property(nonatomic, retain) FPItem *lastSelectedItem; // @synthesize lastSelectedItem;
@property(nonatomic, readonly) _TtC5Files31DOCItemCollectionViewController *itemCollectionViewController; // @synthesize itemCollectionViewController;
@property(nonatomic, copy) NSDictionary *urlToItemCache; // @synthesize urlToItemCache;
@property(nonatomic, readonly) FPItem *defaultItem;
@property(nonatomic, readonly) FPItemCollection *defaultCollection;
@property(nonatomic, readonly) DOCConfiguration *configuration;
@property(nonatomic, readonly) _TtC5Files21DOCFileProviderSource *source;

@end

