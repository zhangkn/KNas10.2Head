//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKUIClientContext, UIButton, UIControl, UILabel, UISearchBar, UISegmentedControl, _UIBackdropView;

@interface ASPurchasedHeaderView : UIView
{
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    SKUIClientContext *_clientContext;
    UISegmentedControl *_filterLocalAppsControl;
    UISearchBar *_searchBar;
    _Bool _searchBarHidden;
    UIButton *_sortButton;
    UILabel *_sortByLabel;
}

@property(readonly, nonatomic) UIControl *sortTypeControl; // @synthesize sortTypeControl=_sortButton;
@property(nonatomic, getter=isSearchBarHidden) _Bool searchBarHidden; // @synthesize searchBarHidden=_searchBarHidden;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *sortTypeTitle;
@property(nonatomic) _Bool filtersLocalApps;
@property(readonly, nonatomic) UISearchBar *searchBar;
@property(readonly, nonatomic) UIControl *filterLocalAppsControl; // @synthesize filterLocalAppsControl=_filterLocalAppsControl;
- (id)initWithFrame:(struct CGRect)arg1;

@end
