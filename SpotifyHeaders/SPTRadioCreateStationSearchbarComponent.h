//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBComponentActionPerformer.h"
#import "HUBComponentViewObserver.h"
#import "UISearchBarDelegate.h"

@class NSSet, NSString, SPTSearchBar, UIImage, UIImageView, UILabel, UIView;

@interface SPTRadioCreateStationSearchbarComponent : NSObject <UISearchBarDelegate, HUBComponentActionPerformer, HUBComponentViewObserver>
{
    UIView *_view;
    id <HUBActionPerformer> _actionPerformer;
    SPTSearchBar *_searchBar;
    UIView *_container;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_iconImageView;
    UIImage *_backgroundImage;
}

+ (id)activateSearchIdentifier;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) SPTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <HUBActionPerformer> actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)activateSearch;
- (void)viewWillAppear;
- (void)viewDidResize;
- (void)configureViewWithModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)prepareViewForReuse;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)loadView;
@property(readonly, nonatomic) NSSet *layoutTraits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

