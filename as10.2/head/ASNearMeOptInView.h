//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIControl, UIImageView, UILabel;

@interface ASNearMeOptInView : UIView
{
    UILabel *_disclaimerLabel;
    UILabel *_featureDescriptionLabel;
    UIImageView *_logoImageView;
    UIButton *_turnOnNearMeButton;
}

@property(readonly, nonatomic) UIControl *turnOnNearMeButton; // @synthesize turnOnNearMeButton=_turnOnNearMeButton;
- (void).cxx_destruct;
- (void)_layoutLandscape;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setTurnOnNearMeButtonTitle:(id)arg1;
- (void)setFeatureDescription:(id)arg1;
- (void)setDisclaimerText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

