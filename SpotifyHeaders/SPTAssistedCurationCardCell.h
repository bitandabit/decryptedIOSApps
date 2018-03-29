//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "GLUEStyleable.h"
#import "SPTAssistedCurationCardViewModelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GLUELabel, NSLayoutConstraint, NSString, SPTAssistedCurationCardCellConfigurator, SPTAssistedCurationCardStyle, SPTTableView;

@interface SPTAssistedCurationCardCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource, GLUEStyleable, SPTAssistedCurationCardViewModelDelegate>
{
    id <SPTAssistedCurationCardCellLogDelegate> _logDelegate;
    id <SPTAssistedCurationCardViewModel> _viewModel;
    SPTAssistedCurationCardCellConfigurator *_cellConfigurator;
    GLUELabel *_titleLabel;
    SPTTableView *_tableView;
    id <GLUETheme> _theme;
    SPTAssistedCurationCardStyle *_style;
    NSLayoutConstraint *_tableVerticalOffsetConstraint;
    NSLayoutConstraint *_titleTopMarginConstraint;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_titleTrailingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *titleTrailingConstraint; // @synthesize titleTrailingConstraint=_titleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLeadingConstraint; // @synthesize titleLeadingConstraint=_titleLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleTopMarginConstraint; // @synthesize titleTopMarginConstraint=_titleTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *tableVerticalOffsetConstraint; // @synthesize tableVerticalOffsetConstraint=_tableVerticalOffsetConstraint;
@property(retain, nonatomic) SPTAssistedCurationCardStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SPTAssistedCurationCardCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) id <SPTAssistedCurationCardViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTAssistedCurationCardCellLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
- (void)assistedCurationCardViewModel:(id)arg1 deletedRow:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistedCurationCardViewModel:(id)arg1 newRows:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didLoadMoreTracksAssistedCurationCardViewModel:(id)arg1;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)addToViewModelTrackInCell:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)addConstraints;
- (void)setupTableView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
