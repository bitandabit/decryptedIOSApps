//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "GLUEStyleable.h"
#import "SPTCellImageLoadingContextCompatibleCell.h"

@class GLUEImageView, NSString;

@interface SPTArtistAboutSocialProofViewCell : UICollectionViewCell <GLUEStyleable, SPTCellImageLoadingContextCompatibleCell>
{
    GLUEImageView *_imageView;
}

@property(retain, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

